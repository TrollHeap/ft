/**
 * libft.h - Header file for the custom library "libft".
 *
 * Description:
 * This header file contains the declarations of functions that are part of the
 * custom library "libft". These functions provide basic utilities for character
 * classification, string manipulation, memory manipulation, and more.
 */

#ifndef LIBFT_H
#define LIBFT_H

#define NULL ((void *) 0)

#include <stdlib.h> // malloc, free, size_t
#include <unistd.h> // write

int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);

int ft_toupper(int c);
int ft_tolower(int c);

size_t ft_strlen(const char *str);
int    ft_strncmp(const char *s1, const char *s2, size_t n);
char  *ft_strchr(const char *s, int c);
char  *ft_strrchr(const char *s, int c);

void  ft_bzero(void *s, size_t n);
void *ft_memset(void *b, int c, size_t len);
void *ft_memcpy(void *dst, const void *src, size_t n);
void *ft_memmove(void *dst, const void *src, size_t len);
void *ft_memchr(const void *s, int c, size_t n);

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);

int ft_memcmp(const void *s1, const void *s2, size_t n);

#endif
