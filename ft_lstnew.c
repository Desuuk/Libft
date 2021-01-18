/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azizloubar <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 10:50:29 by azizlouba         #+#    #+#             */
/*   Updated: 2020/09/10 10:59:51 by azizlouba        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void *content)
{
	t_list *elem;

	if ((elem = malloc(sizeof(t_list))) == NULL)
		return (0);
	elem->content = content;
	elem->next = NULL;
	return (elem);
}
