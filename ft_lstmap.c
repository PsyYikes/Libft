/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarcia <fgarcia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 00:03:34 by fgarcia           #+#    #+#             */
/*   Updated: 2023/11/15 01:08:17 by fgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	Nlist;
	t_list	temp;

	Nlist = NULL;
	while (lst != NULL)
	{
		temp = ft_lstnew(NULL);
		if(!temp)
		{
			ft_lstclear(&Nlist, del);
			return(NULL);
		}
		temp->content = f(lst->content);
		ft_lstadd_back(&Nlist, temp);
		lst = lst->next;
	}
	return(Nlist);
}