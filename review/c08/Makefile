CC      = gcc
CFLAGS  = -Wall -Wextra -Werror

SRC_DIR = src
BIN_DIR = bin

SRC     = $(wildcard $(SRC_DIR)/*.c)
BIN     = $(patsubst $(SRC_DIR)/%.c, $(BIN_DIR)/%, $(SRC))

# ──────────────────────────────
#  Règle principale : tout compiler
# ──────────────────────────────
all: $(BIN)
	@echo "✅ Compilation terminée avec succès !"

# Chaque .c → exécutable dans /bin
$(BIN_DIR)/%: $(SRC_DIR)/%.c
	@mkdir -p $(BIN_DIR)
	$(CC) $(CFLAGS) $< -o $@
	@echo "🔧 Compilé : $< → $@"

# Permet "make ft_div_mod" sans écrire "bin/"
%: $(BIN_DIR)/%
	@true

# ──────────────────────────────
#  Nettoyage
# ──────────────────────────────
clean:
	rm -f $(BIN_DIR)/*

re: clean all

# ──────────────────────────────
#  Lancer un binaire : make run file=ft_div_mod
# ──────────────────────────────
run:
	@./$(BIN_DIR)/$(file)

.PHONY: all clean re run
