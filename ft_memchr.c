/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarcia <fgarcia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:50:27 by fgarcia           #+#    #+#             */
/*   Updated: 2023/10/22 17:52:08 by fgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

void *ft_memchr( const void *memb, int sc, size_t size )
{
	char	*str;
	size_t	i;

	str = (char *)memb;
	i = 0;
	while (i < size)
	{
		if(str[i] == (char)sc)
			return((void *)memb + i);
		i++;
	}
	return(NULL);
}
int main() 
{
	char data[] = { 30, 40, 50, 60, 70, 80, 90, 100, 57 };
	const unsigned int size = 2;
	printf ("%s\n", (unsigned char*)ft_memchr(data, 70, size));
	printf ("%s\n", (unsigned char *)memchr(data, 70, size));
}