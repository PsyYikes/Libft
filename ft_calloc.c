/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarcia <fgarcia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 22:05:58 by fgarcia           #+#    #+#             */
/*   Updated: 2023/10/29 21:02:07 by fgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	resultat;
	unsigned char	*ret;

	resultat = nmemb * size;
	ret = malloc(resultat);
	if (!ret)
		return (NULL);
	ft_bzero(ret, resultat);
	return (ret);
}
