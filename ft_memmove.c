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
	char		*dst;
	const char	*source;
	size_t		i;
	
	dst = dest;
	source = src;
	i = 0;
	if(source > dst)
	{
		while (i < size)
		{
			dst[i] = source[i];
			i++;
		}
	}
	if (source < dst)
	{
		while (size != 0)
		{
			size--;
			dst[size] = source[size];
		}
	}
	return (dest);
	
}
/*int	main(void)
{
	unsigned int n = 0;
	char str[50] = ("salut");
	char *str1 = str + 1;
	printf("%s", (char *) ft_memmove(str1, str , n));
	return(0);
}*/
