/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azizloubar <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 17:26:31 by azizlouba         #+#    #+#             */
/*   Updated: 2020/09/08 17:40:00 by azizlouba        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *strstr(const char *haystack, const char *needle)
{
	size_t i;
	size_t j;
	size_t size_to_find;

	i = 0;
	j = 0;
	size_to_find = 0;
	while (needle[size_to_find])
		size_to_find++;
	if (size_to_find == 0)
		return ((char *)haystack);
	while (haystack[i])
	{
		while (needle[i] == haystack[i + j])
		{
			if (j == size_to_find - 1)
				return ((char *)haystack + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
