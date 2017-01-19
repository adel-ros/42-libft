/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-ros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 20:25:43 by adel-ros          #+#    #+#             */
/*   Updated: 2016/12/21 16:04:28 by adel-ros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	start;
	size_t	c;
	char	*arr;

	i = 0;
	start = 0;
	if (!s)
		return (NULL);
	c = ft_strlen(s);
	while (s[start] == ' ' || s[start] == '\n' || s[start] == '\t')
		start++;
	if (ft_strlen((const char *)&s[start]) < 1 || ft_strlen(s) == 0)
		return (ft_strdup(""));
	while (s[c] == ' ' || s[c] == '\n' || s[c] == '\t' || s[c] == '\0')
		c--;
	if (!(arr = (char *)malloc(sizeof(char) * (c - start) + 1)))
		return (NULL);
	while (start <= c)
	{
		arr[i] = s[start++];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
