/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-ros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/04 11:52:49 by adel-ros          #+#    #+#             */
/*   Updated: 2017/01/16 13:42:18 by adel-ros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	char *haystack;
	char *needle;
	char *start;

	haystack = (char *)big;
	if (!(*little || *big))
		return (haystack);
	while (*haystack)
	{
		start = haystack;
		needle = (char *)little;
		while (*haystack && *needle && *haystack == *needle)
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
			return (start);
		haystack = start + 1;
	}
	return (0);
}
