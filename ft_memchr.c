/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarcia <fgarcia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:50:27 by fgarcia           #+#    #+#             */
/*   Updated: 2023/10/18 17:40:03 by fgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

void *ft_memchr( const void *memb, int sc, size_t size )
{
	unsigned char	*str;
	size_t	i;

	str = (unsigned char *) memb;
	i = 0;
	while (i < size)
	{
		if(str[i] == sc)
				return(str);
		i++;
	}
	return(NULL);
}
/*int main() {

	char data[] = { 'A', 'b', 30, 40, 50, 60, 70, 80, 90, 100 };
	const unsigned int size = 10;

	// On recherche une valeur inhéxistante :
	void * found = memchr( data, 57, size );
	printf( "57 is %s\n", ( found != NULL ? "found" : "not found" ) );

	// On recherche une valeur existante :
	found = memchr( data, 50, size );
	printf( "50 is %s\n", ( found != NULL ? "found" : "not found" ) );
	if ( found != NULL ) {
		printf( "La valeur à la position calculée est %d\n", *((char *) found) );
	}

	return (0);
}*/