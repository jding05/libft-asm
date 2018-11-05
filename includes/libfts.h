#ifndef LIBFTS_H
# define LIBFTS_H

#include <unistd.h>

void	ft_bzero(void *s, size_t n);
char *	ft_strcat(char *s1, const char *s2);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_puts(char const *s);

size_t	ft_strlen(char const *s);
void *	ft_memset(void *b, int c, size_t len);
void *	ft_memcpy(void *dst, const void *src, size_t n);
char *	ft_strdup(const char *s1);

int		ft_cat(int fd);

char *	ft_strcpy(char *dst, char const *src);
char *	ft_strnew(size_t size);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putchar_fd(char c, int fd);
int		ft_putstr_fd(char *str, int fd);

#endif
