/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarcia <fgarcia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 19:14:06 by fgarcia           #+#    #+#             */
/*   Updated: 2023/10/29 21:07:52 by fgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int trimmer(char c, const char *set)
{
	int i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (0);
		i++;
	}
	return (1);
}
char *ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(s1);
	if (!s1)
		return(NULL);
	if (!set)
		return (NULL);
	while (trimmer (s1[i], set) == 0)
		i++;
	while (trimmer (s1[j - 1], set) == 0)
		j--;
	return (ft_substr(s1, i, j- i));
}
/*int main ()
{
	char s1[] = "salut";
	char set[] = "alut";
	printf("%s", ft_strtrim(s1, set));
}*/