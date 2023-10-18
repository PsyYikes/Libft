/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarcia <fgarcia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:32:37 by fgarcia           #+#    #+#             */
/*   Updated: 2023/10/18 20:58:01 by fgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_atoi(char *str);
int		ft_strlen(char *str);
int		ft_strncmp(char *s1, char *s2, size_t size);
int		ft_isalpha(char *str);
int		ft_isnumeric(char *str);
int		ft_isprint(char *str);
int		ft_memcmp( const void * p1, const void * p2, size_t size );
char	*ft_strlcat(char *dest, const char *src, size_t size);
char	*ft_strlcpy(char *dest, char *src, size_t size);
char	*ft_tolower(char *str);
char	*ft_toupper(char *str);
char	*ft_strdup(char *src);
void	*ft_memset( void *s, int c, size_t n );
void	*ft_memchr( const void *memb, int sc, size_t size );
void	ft_bzero(void *s, size_t n);
void * ft_memcpy( void * dest, const void * src, size_t size );
void *ft_memmove( void *dest, const void *src, size_t size );

#endif
