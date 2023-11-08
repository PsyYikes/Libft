/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarcia <fgarcia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:47:03 by fgarcia           #+#    #+#             */
/*   Updated: 2023/11/08 17:44:05 by fgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_count(const char *str, char c)
{
	int i;
	int cntwrd;

	i = 0;
	cntwrd = 0;
	if (str[i] == c)
		i++;
	if (str[i] != '\0')
		cntwrd++;
	while (str[i] && (str[i] != c))
		i++;
	return(cntwrd);
}

static char	*ft_strndup(const char *s, size_t n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * n + 1);
	if (!str)
		return (NULL);
	str = (char *)ft_strlcpy(str, s, n);
	str[n] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		cntwrd;

	cntwrd = ft_count(s, c);
	res = (char **)malloc(sizeof(char *) * (cntwrd + 1));
	if(!res)
		return(NULL);
	res = (char **)ft_strndup( s, c);
	return (res);
}

/*int main()
{
	char *s = "never gonna give you up, never gonna let you doowwwn ";
	char c = ',';
	printf("%%", ft_split( s, c));
}*/