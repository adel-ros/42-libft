/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-ros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 15:52:49 by adel-ros          #+#    #+#             */
/*   Updated: 2016/12/12 18:59:57 by adel-ros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dest;
	unsigned const char	*source;

	source = (unsigned char *)src;
	dest = (unsigned char *)dst;
	if (source >= dest)
	{
		while (len-- > 0)
			*dest++ = *source++;
	}
	else
	{
		dest = (dest + len) - 1;
		source = (source + len) - 1;
		while (len-- > 0)
			*dest-- = *source--;
	}
	return (dst);
}
