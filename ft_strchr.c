/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarcia <fgarcia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 15:11:53 by fgarcia           #+#    #+#             */
/*   Updated: 2023/10/22 17:25:10 by fgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char	*str, int	c)
{
	int i;
	unsigned char blbl;
	blbl = c; 
	i = 0;
	while (str[i] != blbl)
	{
		if (str[i] == '\0')
			return(NULL);
		i++;
	}
	return((char *)str + i);
}
/*int main()
{
	int c = 1024;
	const char tab[50] = "never gonna give you up";
	printf("mine => %s\n", ft_strchr(tab, c));
	printf("real => %s\n", strchr(tab , c));
}*/