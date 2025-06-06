/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarcia <fgarcia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 15:11:56 by fgarcia           #+#    #+#             */
/*   Updated: 2023/10/29 21:02:54 by fgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char	*str, int	c)
{
	int		i;
	int		tmp;

	tmp = -1;
	i = 0;
	while (str[i])
	{
		if (str[i] == c % 256)
			tmp = i;
		i++;
	}
	if (tmp == -1)
	{
		if ((unsigned char)c == '\0')
			return ((char *)str + i);
		return (NULL);
	}
	return ((char *)str + tmp);
}
/*int main()
{
	int c = 'g';
	const char tab[50] = "never gonna give you up";
	printf("mine => %s\n", ft_strrchr(tab, c));
	printf("real => %s\n", strrchr(tab , c));
}*/