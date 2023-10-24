/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarcia <fgarcia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:04:51 by fgarcia           #+#    #+#             */
/*   Updated: 2023/10/22 19:52:25 by fgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	
	i = 0;
	while ((i + 1) < size && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (size)
		dest[i] = '\0';
	return (ft_strlen((char *)src));
}

/*int	main(void)
{
	unsigned int n = 25;
	char str1[50] = ("never gonna give you up");
	char str2[50] = ("coucou moi c'est greg");
	printf("%zu\n", ft_strlcpy(str1, str2 , n));
	printf("%d\n", strlcpy(str1, str2, n));
	return(0);
}*/
