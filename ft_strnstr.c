/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-ros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/04 13:56:18 by adel-ros          #+#    #+#             */
/*   Updated: 2017/01/16 14:00:42 by adel-ros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *lit, size_t len)
{
	char	*haystack;
	char	*needle;
	char	*start;
	size_t	tmp;

	haystack = (char *)big;
	if (!(*lit || *big))
		return (haystack);
	while ((*haystack && len > 0) || (len == 0 && *lit == '\0'))
	{
		start = haystack;
		needle = (char *)lit;
		tmp = len;
		while (*haystack && *needle && *haystack == *needle && tmp > 0)
		{
			haystack++;
			needle++;
			tmp--;
		}
		if (*needle == '\0')
			return (start);
		len--;
		haystack = start + 1;
	}
	return (0);
}
