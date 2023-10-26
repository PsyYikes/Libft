/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarcia <fgarcia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 16:08:03 by fgarcia           #+#    #+#             */
/*   Updated: 2023/10/21 22:43:08 by fgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *strb, const char *strl, size_t lenght)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen((char *) strl);
	while (strb[i] && i <= lenght)
	{
		if(i + len > lenght)
			return(NULL);
		if (ft_strncmp((char *)&strb[i], (char *)strl, len) == 0)
			return((char *)strb + i);
		i++;
	}
	if (len <= 0)
		return ((char *)strb);
	return(NULL);
}
/*int main()
{
	char str[5] = "gonna";
	const char *tab = "never gonna give you up";
	printf("mine => %s\n", ft_strnstr(tab, str, 11));
	printf("real %d\n", strnstr(tab, str, 11));
}*/
