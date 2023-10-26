/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarcia <fgarcia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 01:43:45 by Laubry            #+#    #+#             */
/*   Updated: 2023/10/26 20:49:41 by fgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*dest;
	int		j;
	int		i;

	i = 0;
	j = (ft_strlen(s1) + ft_strlen(s2));
	dest = malloc (sizeof(char) * j + 1);
	if (!dest)
		return (NULL);
	while (s1[i] != '\0')
	{
		dest[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		dest[i + j] = s2[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*int main ()
{
	char s1[50] = "salut";
	char s2[50] = "ma poule";
	char *r = ft_strjoin(s1, s2);
	printf ("%s", r);
	free(r);
}*/