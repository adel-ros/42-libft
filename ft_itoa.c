/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-ros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 19:26:04 by adel-ros          #+#    #+#             */
/*   Updated: 2017/01/19 13:41:59 by adel-ros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*arr;
	int		count;
	int		end;

	count = ft_countdigits(n);
	end = count;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (!(arr = (char *)malloc(sizeof(char) * count + 1)))
		return (NULL);
	if (n <= 0)
	{
		arr[0] = '-';
		if (n == 0)
			arr[0] = '0';
		n = n * (-1);
	}
	while (n != 0)
	{
		arr[count - 1] = (n % 10) + '0';
		n /= 10;
		count--;
	}
	arr[end] = '\0';
	return (arr);
}
