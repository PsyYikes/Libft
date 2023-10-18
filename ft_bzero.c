/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarcia <fgarcia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:43:57 by fgarcia           #+#    #+#             */
/*   Updated: 2023/10/18 17:41:09 by fgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>
#include "libft.h"

void ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	size_t	i;

	str = s;
	i = 0;
	while (i < n)
	{
		*(unsigned char*)(str + i) = 0;
		i++;
	}
}
/*int main()
{
	
	char *s = "bonjour";
	printf("%p", &s);
	ft_bzero(&s, 2);
	printf("%p", &s);
	return(0);
}*/
