/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarcia <fgarcia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 00:41:03 by fgarcia           #+#    #+#             */
/*   Updated: 2023/10/22 17:20:11 by fgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
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
