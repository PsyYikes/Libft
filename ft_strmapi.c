/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarcia <fgarcia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:42:32 by fgarcia           #+#    #+#             */
/*   Updated: 2023/11/09 20:47:26 by fgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s)
		return(NULL);
	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (!str)
		return(NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return(str);
}
//int main()
//{
//	char	*str;
//	char	*strmapi;
//	strcpy(str, "LoReM iPsUm");
//	strmapi = ft_strmapi(str, &mapi);
//	ft_print_result(strmapi
//	if (strmapi == str)
//		ft_print_result("\nA new string was not returned");
//	if (strmapi[11] != '\0')
//		ft_print_result("\nString is not null terminated");
//}