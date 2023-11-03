/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarcia <fgarcia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 22:38:46 by fgarcia           #+#    #+#             */
/*   Updated: 2023/11/03 15:45:58 by fgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_countnb(int n)
{
	int i;

	i = 0;
	if (n < 0)
	{
		n = -n;
		i++;
	}
	if(n == 0)
		i++;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_tmp(int taille, int limite, long nb, char	*tmp)
{
	while (taille > limite)
	{
		tmp[taille - 1] = (nb % 10) + '0';
		nb /= 10;
		taille--;
	}
	return (tmp);
}
char	*ft_itoa(int n)
{
	int		taille;
	char	*tmp;
	long	nb;
	int		limite;

	nb = n;
	limite = 0;
	taille = ft_countnb(nb);
	tmp = ft_calloc(taille + 1, sizeof(char));
	if (!tmp)
		return(NULL);
	if (nb < 0)
		limite = 1;
	if (limite == 1)
		tmp[0] = '-';
	if (nb < 0)
		nb = -nb;	
	ft_tmp(taille, limite, nb, tmp);
	return (tmp);
}
/*int main ()
{
	int n = 2134556578;
	printf("%s\n", ft_itoa(n));
}*/