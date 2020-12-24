/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azizloubar <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 11:26:21 by azizlouba         #+#    #+#             */
/*   Updated: 2020/09/10 11:31:21 by azizlouba        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *current;
	t_list *curr_next;

	if (!lst)
		return ;
	current = *lst;
	while (current->next)
	{
		current = *lst;
		(*del)(current->content);
		curr_next = current->next;
		free(current);
		*lst = curr_next;
	}
}
