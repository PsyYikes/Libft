/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarcia <fgarcia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:42:14 by fgarcia           #+#    #+#             */
/*   Updated: 2023/10/29 21:02:31 by fgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset( void *s, int c, size_t n )
{
	char	*str;
	size_t	i;

	str = s;
	i = 0;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
/*int main()
{
	char *s = "bonjour";
	printf("mine =>" "%p", ft_memset(&s, 2, 3));
	printf("real =>" "%p", memset(&s, 2, 3));
}*/