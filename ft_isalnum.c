/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarcia <fgarcia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:52:22 by fgarcia           #+#    #+#             */
/*   Updated: 2023/10/18 17:41:04 by fgarcia          ###   ########.fr       */
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
static int	is_numeric(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_isalnum(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_numeric(str[i]) || is_lettre(str[i]))
			return (1);
		i++;
	}
	return (0);
}
/*int	main(void)
{
	char	tab[255] = ("aksjdkjf1542574");
	
	printf("%d", ft_isalnum(tab));
	return (0);
}*/