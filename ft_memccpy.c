/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-ros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 14:42:18 by adel-ros          #+#    #+#             */
/*   Updated: 2016/12/12 19:00:21 by adel-ros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dest;
	unsigned char	*source;
	unsigned char	a;

	source = (unsigned char *)src;
	dest = (unsigned char *)dst;
	a = (unsigned char)c;
	if (!(source || dest))
		return (NULL);
	while (n > 0)
	{
		*dest = *source;
		if (*source == a)
		{
			dest++;
			return (dest);
		}
		dest++;
		source++;
		n--;
	}
	return (NULL);
}
