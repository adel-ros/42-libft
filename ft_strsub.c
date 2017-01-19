/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-ros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 17:41:23 by adel-ros          #+#    #+#             */
/*   Updated: 2016/12/21 15:39:09 by adel-ros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*arr;

	i = 0;
	if (!s)
		return (NULL);
	while (start-- > 0)
		s++;
	if (!(arr = (char *)malloc(sizeof(*s) * len + 1)))
		return (NULL);
	while (*s && len > 0)
	{
		arr[i] = *s;
		s++;
		i++;
		len--;
	}
	arr[i] = '\0';
	return (arr);
}
