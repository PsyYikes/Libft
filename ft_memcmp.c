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

int ft_memcmp( const void *s1, const void *s2, size_t n )
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t		i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
   	while (i < n)
    	{
        	if (str1[i] > str2[i])
            		return (1);
        	else if (str1[i] < str2[i])
            		return (-1);
        	i++;
    	}
    	return (0);
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
