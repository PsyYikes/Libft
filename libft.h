/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarcia <fgarcia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:32:37 by fgarcia           #+#    #+#             */
/*   Updated: 2023/10/22 19:32:47 by fgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
#include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlen(char *str);
int		ft_atoi(const char *str);
int		ft_strncmp(char *s1, char *s2, size_t size);
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
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy( void * dest, const void * src, size_t size );
void	*ft_memmove( void *dest, const void *src, size_t size );
char	*ft_strchr(const char	*str, int	c);
char	*ft_strrchr(const char	*str, int	c);
char	*ft_strnstr(const char *strb, const char *strl, size_t lenght);

#endif
