/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarcia <fgarcia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 14:19:59 by fgarcia           #+#    #+#             */
/*   Updated: 2023/10/22 17:21:35 by fgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 'a' - 'A';
	return ((unsigned long)c);
}

/*int	main(void)
{
	char	tab[]= "ijiewhiufHDJSKOIF";
	
	printf ("avant lowcase => %s\n", tab);
	ft_strlowcase(tab);
	printf ("apres lowcase => %s\n", tab);
	return (*/
