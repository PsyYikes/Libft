/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarcia <fgarcia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:00:38 by fgarcia           #+#    #+#             */
/*   Updated: 2023/10/18 17:39:41 by fgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

int ft_memcmp( const void * p1, const void * p2, size_t size )
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t				i;

	str1 = (unsigned char *)p1;
	str2 = (unsigned char *)p2;
	i = 0;
	while (str1[i] && str2[i] && i < size)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (str1[i] - str2[i]);
}
/*int	main(void)
{
	unsigned int	n;
	
	n = 9;
	char	tab1[] = "salu8wejh";
	char	tab2[] = "salu9wejh";
	printf("my %d\n", ft_memcmp(tab1 , tab2 , n));
	printf("real %d\n", memcmp(tab1 , tab2 , n));
}*/