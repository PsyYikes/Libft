/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarcia <fgarcia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 00:41:03 by fgarcia           #+#    #+#             */
/*   Updated: 2023/10/29 21:03:10 by fgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 'a' - 'A';
	return ((unsigned long)c);
}

/*int	main(void)
{
	char	tab[]= "ijiewhiufHDJSKOIF";
	
	printf ("avant strupcase => %s\n", tab);
	ft_strupcase(tab);
	printf ("apres strupcase => %s\n", tab);
	return (0);
}*/
