/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-ros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 19:46:59 by adel-ros          #+#    #+#             */
/*   Updated: 2016/12/20 17:27:24 by adel-ros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*arr;

	arr = (void *)malloc(size);
	if (arr)
	{
		ft_memset(arr, 0, size);
		return (arr);
	}
	return (NULL);
}
