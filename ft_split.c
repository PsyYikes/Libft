/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarcia <fgarcia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:47:03 by fgarcia           #+#    #+#             */
/*   Updated: 2023/11/09 20:21:08 by fgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_count(const char *str, char c)
{
	int word_count;

	word_count = 0;
	while (*str != '\0')
	{
		while (*str && *str == c)
			++str;
		if (*str == '\0')
			return (word_count);
		++word_count;
		while (*str && *str != c)
			++str;
	}
	return(word_count);
}

static char	*ft_strndup(const char *s, size_t n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (n + 1));
	if (!str)
		return (NULL);
	ft_memcpy(str, s, n);
	str[n] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		cntwrd;
	int		i;
	int		j;

	cntwrd = ft_count(s, c);
	res = (char **)malloc(sizeof(char *) * (cntwrd + 1));
	if (!res)
		return (NULL);

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			// touve la len du mots en cours de revision.
			int word_len;
			word_len = 0;
			while (s[i + word_len] && s[i + word_len] != c)
				word_len++;

			//alloue de la memoire et la copie.
			res[j] = ft_strndup(s + i, word_len);
			if (!res[j])
			{
				i = 0;
				while (i < j)
					free(res[i]);
				free(res);
				return (NULL);
			}
			j++;
			i += word_len;
		}
		else
			i++;
	}
	res[j] = NULL;  // Null-terminate la array de pointeur.
	return (res);
}

// int main(void)
// {
// 	char **bite = ft_split("  tripouille  42  ", ' ');
// 	char **bite2 = bite;
	
// 	while (*bite2)
// 	{
// 		printf(">%s | %d\n", *bite2, ft_strlen(*bite2));
// 		free(*bite2);
// 		++bite2;
// 	}
// 	free(bite);
// }

/*int main(void)
{
	// Chaîne de caractères à diviser
	const char *str = "Hello,World,How,Are,You";

	// Caractère de séparation
	char separator = ',';

	// Appel de la fonction ft_split
	char **result = ft_split(str, separator);

	// Affichage des mots séparés
	int i = 0;
	while (result[i] != NULL)
	{
		printf("Word %d: %s\n", i + 1, result[i]);
		i++;
	}

	// Libération de la mémoire allouée
	i = 0;
	while (result[i] != NULL)
	{
		free(result[i]);
		i++;
	}
	free(result);

	return (0);
}*/