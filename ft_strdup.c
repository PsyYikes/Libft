/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarcia <fgarcia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 13:58:24 by fgarcia           #+#    #+#             */
/*   Updated: 2023/11/04 19:20:28 by fgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*dest;
	int		j;

	j = 0;
	dest = malloc(ft_strlen(src) + 1);
	if (!dest)
		return(NULL);
	while (src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
/*int main(void)
{
	char s1[50] = "never gonna give you up";
	char *s = ft_strdup(s1);
	printf("%s\n", s);
	return(0);
}*/
