/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarcia <fgarcia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 11:15:24 by fgarcia           #+#    #+#             */
/*   Updated: 2023/10/18 20:04:07 by fgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int	ft_strncmp(char *s1, char *s2, size_t size)
{
	size_t	i;

	if (size == 0)
		return (0);
	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < size - 1)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

/*int	main(void)
{
	unsigned int	n;
	
	n = 9;
	char	tab1[] = "salu9wejh";
	char	tab2[] = "salu9wejhjdhw";
	printf("my %d\n",ft_strncmp(tab1 , tab2 , n) );
	printf("real %d\n",strncmp(tab1 , tab2 , n) );
}*/
