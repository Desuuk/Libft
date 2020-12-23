/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azizloubar <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 11:37:10 by azizlouba         #+#    #+#             */
/*   Updated: 2020/09/10 12:34:03 by azizlouba        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;

	if (!f || !del)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		if (!(*f)(lst->content))
		{
			(*del)(lst->content);
			free(lst);
		}
		else
			new_lst->content = (*f)(lst->content);
		lst = lst->next;
		new_lst = new_lst->next;
	}
	return (new_lst);
}
