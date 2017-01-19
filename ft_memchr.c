/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-ros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 14:28:37 by adel-ros          #+#    #+#             */
/*   Updated: 2016/12/14 15:31:51 by adel-ros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char x;
	unsigned char *str;

	x = (unsigned char)c;
	str = (unsigned char*)s;
	while (n > 0)
	{
		if (*str == x)
			return (str);
		str++;
		n--;
	}
	return (NULL);
}
