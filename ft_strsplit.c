/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-ros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 11:10:25 by adel-ros          #+#    #+#             */
/*   Updated: 2016/12/21 15:44:31 by adel-ros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *str, char c)
{
	int		words;
	char	**tab;
	char	*s1;
	int		i;

	if (!str || !c)
		return (NULL);
	s1 = (char *)str;
	words = ft_countwords(s1, c);
	if (!(tab = (char **)malloc(sizeof(char *) * (words + 1))))
		return (NULL);
	i = 0;
	while (*s1)
	{
		while (*s1 && *s1 == c)
			s1++;
		if (*s1 && *s1 != c)
		{
			tab[i++] = ft_mallocword(s1, c);
			while (*s1 && *s1 != c)
				s1++;
		}
	}
	tab[i] = NULL;
	return (tab);
}
