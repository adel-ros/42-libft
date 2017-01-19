/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-ros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 14:14:40 by adel-ros          #+#    #+#             */
/*   Updated: 2017/01/16 14:25:08 by adel-ros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	int		i;
	size_t	len;
	char	*mem;

	i = 0;
	len = ft_strlen(src);
	mem = (char *)malloc(sizeof(*src) * (len + 1));
	if (mem == 0)
		return (0);
	while (src[i] != '\0')
	{
		mem[i] = src[i];
		i++;
	}
	mem[i] = '\0';
	return (mem);
}
