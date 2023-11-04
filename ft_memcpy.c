/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarcia <fgarcia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 20:05:02 by fgarcia           #+#    #+#             */
/*   Updated: 2023/11/04 19:18:57 by fgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void * ft_memcpy( void * dest, const void * src, size_t size )
{
	size_t	i;
	char *str;
	char *str1;

	str1 = (char *)dest;
	str = (char *)src;
	i = 0;
	if (!str1 && !str)
		return(NULL);
	while (i < size)
	{
		str1[i] = str[i];
		i++;
	}
	if (size == 0)
		return (str1);
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