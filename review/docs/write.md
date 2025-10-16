### ⚙️ Prototype

```c
#include <unistd.h>

ssize_t write(int fd, const void *buf, size_t count);
```

* `fd` : le **file descriptor** (entier) désignant la cible.
* `buf` : pointeur vers les **données à écrire** (en mémoire).
* `count` : **nombre d’octets** à écrire.
* **Retour** : nombre d’octets réellement écrits (ou `-1` si erreur).

---

### 🧠 Principe causal

Sous UNIX, **tout est fichier** :

* `0` = entrée standard (`stdin`)
* `1` = sortie standard (`stdout`)
* `2` = sortie d’erreur (`stderr`)
* au-delà = fichiers ouverts via `open()`

`write` demande donc au noyau :

> “Transfère `count` octets du tampon mémoire `buf` vers la ressource identifiée par `fd`.”

---

### 🧩 Exemple concret

```c
#include <unistd.h>

int main(void)
{
    const char *msg = "Hello, world!\n";
    write(1, msg, 14);   // 1 = stdout
    return 0;
}
```

Résultat → s’affiche sur ton terminal :

```
Hello, world!
```

---

### 🔬 Comparatif avec `printf`

| Fonction | Niveau               | Formate ? | Passe par le noyau ? | Bufferisée ? |
| :------- | :------------------- | :-------- | :------------------- | :----------- |
| `write`  | bas-niveau (syscall) | ❌ non     | ✅ oui                | ❌ non        |
| `printf` | haut-niveau (stdio)  | ✅ oui     | ❌ indirectement      | ✅ oui        |

`printf` appelle **indirectement `write`**, mais avec formatage et buffer.
Donc `write` = brut, immédiat, synchrone ; `printf` = confortable mais lent.

---

### 🧱 Exemple avec fichier

```c
#include <fcntl.h>
#include <unistd.h>

int main(void)
{
    int fd = open("out.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    const char *text = "42 School!\n";
    write(fd, text, 11);
    close(fd);
    return 0;
}
```

→ crée `out.txt` contenant `42 School!`.

---

### ⚠️ Cas d’erreurs

`write` peut retourner `-1` et mettre `errno` :

* `EPIPE` → écriture sur un pipe fermé
* `EBADF` → `fd` invalide
* `EFAULT` → pointeur `buf` invalide
* `EIO` → erreur d’entrée/sortie physique

Toujours tester le retour :

```c
ssize_t n = write(1, buf, len);
if (n == -1)
    perror("write failed");
```

---

### 🔍 Diagramme ASCII

```
┌────────────┐
│ user space │
│  buf[]     │
└─────┬──────┘
      │ syscall
      ▼
┌────────────┐
│ kernel     │
│  → fd table│
│  → file    │
│  → driver  │
└────────────┘
```

---

**En résumé :**

* `write` est le canal brut entre ton programme et le noyau.
* Tu lui passes un descripteur, un tampon et une taille.
* C’est la fonction à la base de **toute sortie C sous UNIX**.
