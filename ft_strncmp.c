/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarcia <fgarcia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 11:15:24 by fgarcia           #+#    #+#             */
/*   Updated: 2023/10/29 21:02:47 by fgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
		++i;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
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
