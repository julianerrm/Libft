#include <stddef.h>

#ifndef LIBFT_H
# define LIBFT_H

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *s);
void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t n);
char	*ft_strcpy(char *restrict dest, const char *src);
char	*ft_strcat(char *restrict dest, const char *restrict src);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t n);
int		ft_atoi(const char *nptr);
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_strdup(const char *s);

#endif