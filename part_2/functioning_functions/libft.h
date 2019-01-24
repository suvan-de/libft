/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: suvan-de <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/09 17:50:59 by suvan-de      #+#    #+#                 */
/*   Updated: 2019/01/24 15:19:08 by suvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int n);
void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);
char	*ft_strnew(size_t size);
void	ft_strdel(char **as);
void	ft_strclr(char *s);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned in, char *));
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int		ft_strequ(char const *s1, char const *s2);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
void	ft_putendl(char const *s);
char	*ft_strtrim(char const *s);
size_t	ft_strlen(char const *str);
int		ft_atoi(char const *str);
char	*ft_itoa(int n);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
int		ft_strcmp(char const *s1, char const *s2);
int     ft_strequ(char const *s1, char const *s2);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strdup(const char *s1);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strncpy(char *dst, const char *src, size_t len);
char	*ft_strcat(char	*restrict s1, const char *restrict s2);
char    *ft_strncat(char *restrict s1, const char *restrict s2, size_t n);
size_t  ft_strlcat(char *dest, const char *src, size_t size);
int      ft_strcmp(const char *str1, const char *str2);
int      ft_strncmp(const char *str1, const char *str2, size_t n);
char    *ft_strchr(const char *str, int c);
char    *ft_strrchr(const char *str, int c);
char    *ft_strstr(const char *haystack, const char *needle);
char    *ft_strnstr(const char *big, const char *little, size_t len);
int     ft_isalpha(int c);
int     ft_isdigit(int c);
int     ft_isalnum(int c);
int     ft_isascii(int c);
int     ft_isprint(int c);
int     ft_toupper(int c);
int     ft_tolower(int c);
char	**ft_strsplit(char const *s, char c);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr_fd(int n, int fd);
