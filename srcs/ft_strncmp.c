/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azizloubar <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 14:29:15 by azizlouba         #+#    #+#             */
/*   Updated: 2020/09/09 16:42:51 by azizlouba        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;
	const unsigned char *s1_c;
	const unsigned char *s2_c;

	s1_c = (const unsigned char *)s1;
	s2_c = (const unsigned char *)s2;
	i = 0;
	while (i < n && s1_c[i] && s2_c[i])
	{
		if (s1_c[i] != s2_c[i])
			return (s1_c[i] - s2_c[i]);
		i++;
	}
	return (s1_c[i] - s2_c[i]);
}
