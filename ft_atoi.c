/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azizloubar <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 21:04:54 by azizlouba         #+#    #+#             */
/*   Updated: 2020/09/09 17:47:58 by azizlouba        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isspace(const char *str, int i)
{
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	return (i);
}

int		ft_atoi(const char *str)
{
	int		i;
	long	res;
	int		np;
	int		ret;

	ret = 1;
	res = 0;
	np = 1;
	i = ft_isspace(str, 0);
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			np = -np;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - 48);
		if (res < 0 && (np == 1))
			ret = -1;
		else if (res < 0 && (np == -1))
			ret = 0;
		i++;
	}
	return (ret == 1 ? res * np : ret);
}
