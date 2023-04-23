/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thepaqui <thepaqui@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:36:41 by thepaqui          #+#    #+#             */
/*   Updated: 2023/04/23 15:51:14 by thepaqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# include <math.h>

/* Characters */
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);

int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_isinset(int c, const char *set);

int		ft_toupper(int c);
int		ft_tolower(int c);

/* Display */
void	ft_putchar_fd(char c, int fd);
void	ft_putchar(char c);

void	ft_putstr_fd(char *s, int fd);
void	ft_putstr(char *s);

void	ft_putendl_fd(char *s, int fd);
void	ft_putendl(char *s);

void	ft_putnbr_fd(int n, int fd);
void	ft_putnbr(int n);

/* Strings */
size_t	ft_strlen(const char *s);
size_t	ft_strclen(const char *str, const char *set);
size_t	ft_strtablen(const char **tab);

int		ft_strlcpy(char *dst, const char *src, int dstsize);
int		ft_strlcat(char *dst, const char *src, int dstsize);
int		ft_strncmp(const char *s1, const char *s2, size_t n);

int		ft_atoi(const char *str);
char	*ft_itoa(int n);

char	*ft_strdup(const char *str);
char	*ft_strndup(const char *str, int n);

char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strnstr(const char *str, const char *to_find, size_t len);

char	*ft_strjoin(char const *s1, char const *s2);
char	**ft_strpre(char **tab, char *pre);
char	**ft_strsuf(char **tab, char *suf);
char	**ft_split(char const *s, char *set);
char	**ft_split_with_empty(char const *s, char *set);
char	**free_tab(char **tab, int index);

char	*ft_strtrim(char const *s1, char const *set);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	replace_all_x_with_y(char *s, char x, char y);
void	replace_first_x_with_y(char *s, char x, char y);
void	ft_strrev(char *s);

/* Memory */
void	*ft_calloc(size_t count, size_t size);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);

void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);

/* Math */
double	degree_to_radian(double degree);
double	radian_to_degree(double radian);
double	distance_2d(double x_a, double y_a, double x_b, double y_b);
double	distance_3d(double x_a, double y_a, double z_a, double x_b, double y_b, double z_b);
double	distance_long_lat(double long_a, double lat_a, double long_b, double lat_b, double radius);

#endif
