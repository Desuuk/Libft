/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azizloubar <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 11:28:57 by azizlouba         #+#    #+#             */
/*   Updated: 2020/09/09 15:25:22 by azizlouba        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_check_word(char c, char s)
{
	if (s == c)
		return (0);
	else if (s == '\0')
		return (0);
	return (1);
}

int		ft_count(char const *s, char c)
{
	size_t i;
	size_t nb;

	i = 0;
	nb = 0;
	while (s[i])
	{
		if (ft_check_word(c, s[i]) == 1 && ft_check_word(c, s[i + 1]) == 0)
			nb++;
		i++;
	}
	return (nb);
}

void	ft_copy(char *dest, char const *src, char c)
{
	size_t i;
	
	i = 0;
	while (ft_check_word(c, src[i]) == 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

void	ft_transfert(char **tab, char const *s, char c)
{
	int i;
	int j;
	int word;

	i = 0;
	word = 0;
	while (s[i])
	{
		if (ft_check_word(c, s[i]) == 0)
			i++;
		else
		{
			j = 0;
			while (ft_check_word(c, s[i + j]) == 1)
				j++;
			if ((tab[word] = malloc(sizeof(char) * (j + 1))) == NULL)
				return ;
			ft_copy(tab[word], s + i, c);
			i = i + j;
			word++;
		}
	}
}

char	**ft_split(char const *s, char c)
{
	int word;
	char **tab;

	word = ft_count(s, c);
	tab = NULL;
	if ((tab = malloc(sizeof(char *) * (word + 1))) == NULL)
		return (NULL);
	tab[word] = 0;
	ft_transfert(tab, s, c);
	return (tab);
}
