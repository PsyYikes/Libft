/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarcia <fgarcia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 23:33:06 by fgarcia           #+#    #+#             */
/*   Updated: 2023/10/18 17:40:09 by fgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

static int	is_print(char c)
{
	return (c >= ' ' && c <= '~');
}

int	ft_isprint(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!is_print(str[i]))
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	tab[255] = ("\x12");
	
	printf("%d", ft_isprint(tab));
	return (0);
}*/