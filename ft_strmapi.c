/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarcia <fgarcia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:42:32 by fgarcia           #+#    #+#             */
/*   Updated: 2023/11/07 18:17:15 by fgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_strmapi(const char *s, (*f)(unsigned int, char *))
{
	unsigned int	i;
	char			*str;

	i = 0;
	str = (char *)malloc(sizeof(char *) * (ft_strlen(s)) + 1);
	if (!str)
		return;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
}