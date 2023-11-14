/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarcia <fgarcia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 21:53:42 by fgarcia           #+#    #+#             */
/*   Updated: 2023/11/14 22:48:10 by fgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list	*newnode;

	newnode = malloc(sizeof(t_list))
	if (newnode)
	{
		newnode->content = content;
		newnode->next = NULL;
	}
	return(&newnode);
}