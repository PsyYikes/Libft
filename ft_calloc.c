/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarcia <fgarcia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 22:05:58 by fgarcia           #+#    #+#             */
/*   Updated: 2023/10/25 23:10:10 by fgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	resultat;
	char	ret;

	resultat = nmemb * size;
	ret = malloc(resultat);
	if (!ret)
		return (NULL);
	ft_bzero(ret, resultat);
	return (ret);
}
