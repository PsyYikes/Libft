/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarcia <fgarcia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 14:19:59 by fgarcia           #+#    #+#             */
/*   Updated: 2023/10/18 17:38:11 by fgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_tolower(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 'a' - 'A';
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	tab[]= "ijiewhiufHDJSKOIF";
	
	printf ("avant lowcase => %s\n", tab);
	ft_strlowcase(tab);
	printf ("apres lowcase => %s\n", tab);
	return (*/
