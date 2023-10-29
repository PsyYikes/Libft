/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarcia <fgarcia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:52:22 by fgarcia           #+#    #+#             */
/*   Updated: 2023/10/29 21:02:02 by fgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	return (is_minuscule(c)|| is_majuscule(c));
}
static int	is_numeric(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_isalnum(int c)
{
	if (is_numeric(c) || is_lettre(c))
		return (1);
	return (0);
}
/*int	main(void)
{
	char	tab[255] = ("aksjdkjf1542574");
	
	printf("%d", ft_isalnum(tab));
	return (0);
}*/