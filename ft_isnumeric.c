/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnumeric.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarcia <fgarcia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 14:26:04 by fgarcia           #+#    #+#             */
/*   Updated: 2023/10/18 17:40:18 by fgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

static int	is_numeric(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_isnumeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!is_numeric(str[i]))
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	tab[255] = ("");
	
	printf("%d", ft_isnumeric(tab));
	return (0);
}*/
