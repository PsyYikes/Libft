/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarcia <fgarcia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 17:33:09 by fgarcia           #+#    #+#             */
/*   Updated: 2023/11/04 19:08:20 by fgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z')||(c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	char	tab[255] = ("*mamamanmaditquejetaisspecial");
	
	printf("%d", ft_isalpha(tab));
	return (0);
}*/
