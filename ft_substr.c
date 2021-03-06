/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azizloubar <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 18:20:12 by azizlouba         #+#    #+#             */
/*   Updated: 2021/01/11 17:13:10 by aloubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *str;

	str = NULL;
	if (!s)
		return (NULL);
	if ((unsigned int)ft_strlen(s) < start)
		return (ft_calloc(1, sizeof(char)));
	if ((str = malloc(sizeof(char) * (len + 1))) == NULL)
		return (NULL);
	ft_memcpy(str, s + start, len);
	str[len] = '\0';
	return (str);
}
