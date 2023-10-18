/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarcia <fgarcia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 00:41:03 by fgarcia           #+#    #+#             */
/*   Updated: 2023/10/18 17:37:26 by fgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_toupper(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 'a' - 'A';
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	tab[]= "ijiewhiufHDJSKOIF";
	
	printf ("avant strupcase => %s\n", tab);
	ft_strupcase(tab);
	printf ("apres strupcase => %s\n", tab);
	return (0);
}*/
