/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarcia <fgarcia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 20:05:02 by fgarcia           #+#    #+#             */
/*   Updated: 2023/10/18 20:26:54 by fgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include <stdio.h>

void * ft_memcpy( void * dest, const void * src, size_t size )
{
	size_t	i;
	const char *str;
	char *str1;

	str1 = dest;
	str = src;
	i = 0;
	while (str[i] != '\0' && (i < size))
	{
		str1[i] = str[i];
		i++;
	}
	while (i < size)
	{
		str1[i] = '\0';
		i++;
	}
	return(str1);
}
/*int	main(void)
{
	size_t n = 25;
	char str1[50] = ("never gonna give you up");
	char str2[50] = ("coucou moi c'est greg");
	printf("Mine =>%s\n", (char *) ft_memcpy(str1, str2 , n));
	printf("Real =>%s\n", (char *) memcpy(str1, str2, n));
	return(0);
}*/