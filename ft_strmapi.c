/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-ros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 16:38:56 by adel-ros          #+#    #+#             */
/*   Updated: 2016/12/15 17:04:47 by adel-ros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*arr;
	int				count;
	unsigned int	i;

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
		arr[i] = f(i, s[i]);
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
