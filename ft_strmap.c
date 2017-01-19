/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-ros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 15:50:32 by adel-ros          #+#    #+#             */
/*   Updated: 2016/12/15 16:26:22 by adel-ros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*arr;
	int		count;
	int		i;

	i = 0;
	count = 0;
	if (!s)
		return (NULL);
	while (s[count])
		count++;
	if (!(arr = (char *)malloc(sizeof(*s) * count + 1)))
		return (NULL);
	while (s[i])
	{
		arr[i] = f(s[i]);
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
