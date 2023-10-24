/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarcia <fgarcia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 14:28:46 by fgarcia           #+#    #+#             */
/*   Updated: 2023/10/22 18:20:05 by fgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t res;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	res = 0;
	while (dest[i] != '\0')
		i++;
	 while (src[res] != '\0')
		res++;
	if (size <= i)
		res += size;
	else
		res += i;
	while (src[j] && (i + 1) < size )
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (res);
}

/*int main(void)
{
	unsigned int	nb;
	nb = 49;
	char src1[255] = "never gonna give you up!";
	char dst1[255] = "never gonna let you down!";
	;
	printf("ft_strlcat => %zu\n", ft_strlcat(dst1, src1, nb));
	char src2[255] = "never gonna give you up!";
	char dst2[255] = "never gonna let you down!";
	strlcat(dst2, src2, nb);
	printf("strlcat => %d\n",strlcat(dst2, src2, nb));
}*/