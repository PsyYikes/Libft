/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarcia <fgarcia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:32:37 by fgarcia           #+#    #+#             */
/*   Updated: 2023/11/08 17:51:27 by fgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlen(const char *str);
int		ft_atoi(const char *str);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_isalpha(int c);
int		ft_isnumeric(int c);
int		ft_isprint(int c);
int		ft_isalnum(int c);
int		ft_isdigit(int c);
int		ft_isascii(int c);
int		ft_memcmp( const void * p1, const void * p2, size_t size );
int		ft_tolower(int c);
int		ft_toupper(int c);
char	*ft_strdup(char *src);
void	*ft_memset( void *s, int c, size_t n );
void	*ft_memchr( const void *memb, int sc, size_t size );
void	*ft_calloc(size_t nmemb, size_t size);
void	ft_bzero(void *s, size_t n);
void	ft_putstr_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);
void	*ft_memcpy( void * dest, const void * src, size_t size );
void	*ft_memmove( void *dest, const void *src, size_t size );
char	*ft_strchr(const char	*str, int	c);
char	*ft_strrchr(const char	*str, int	c);
char	*ft_strnstr(const char *strb, const char *strl, size_t lenght);
char	*ft_substr(const char *s, unsigned int start, size_t len);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_itoa(int n);
char	**ft_split(char const *s, char c);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
void	ft_putnbr_fd(int n, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_strmapi(const char *s, (*f)(unsigned int, char *));



#endif
