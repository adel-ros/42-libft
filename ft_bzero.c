/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-ros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 17:10:59 by adel-ros          #+#    #+#             */
/*   Updated: 2016/12/07 11:42:21 by adel-ros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *b, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char*)malloc(sizeof(b));
	str = b;
	i = 0;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}
