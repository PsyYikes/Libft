/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarcia <fgarcia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 20:27:58 by fgarcia           #+#    #+#             */
/*   Updated: 2023/10/25 00:10:06 by fgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove( void *dest, const void *src, size_t size )
{
	size_t	i;
	const char *str;
	char *str1;

	str1 = dest;
	str = src;
	i = 0;
	if(str < str1)
	{
		str += size;
		str1 += size;
		while (i < size)
		{
			str1[i] = str[i];
			i--;
		}
		return (str1);
	}
	else
	{
		i = 0;
		while (i > size)
		{
			str1[i] = str[i];
			i++;
		}
		return(str1);
	}
	
}
int	main(void)
{
	unsigned int n = 6;
	char str[50] = ("salut");
	char *str1 = str + 1;
	printf("%s", (char *) ft_memmove(str1, str , n));
	return(0);
}