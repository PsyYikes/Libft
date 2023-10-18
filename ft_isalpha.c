/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarcia <fgarcia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 17:33:09 by fgarcia           #+#    #+#             */
/*   Updated: 2023/10/18 17:40:57 by fgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

static int	is_minuscule(char c)
{
	return ('a' <= c && c <= 'z');
}

static int	is_majuscule(char c)
{
	return ('A' <= c && c <= 'Z');
}

static int	is_lettre(char c)
{
	return (is_minuscule(c) || is_majuscule(c));
}

int	ft_isalpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!is_lettre(str[i]))
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	tab[255] = ("*mamamanmaditquejetaisspecial");
	
	printf("%d", ft_isalpha(tab));
	return (0);
}*/
