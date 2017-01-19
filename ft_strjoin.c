/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-ros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 19:29:24 by adel-ros          #+#    #+#             */
/*   Updated: 2016/12/21 16:23:16 by adel-ros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		count;
	char	*arr;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	count = ft_strlen((char*)s1) + ft_strlen((char *)s2);
	if (!(arr = (char *)malloc(sizeof(char) * count + 1)))
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		arr[i] = s1[i];
		i++;
	}
	while (s2[j])
		arr[i++] = s2[j++];
	arr[i] = '\0';
	return (arr);
}
