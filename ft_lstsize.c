/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-ros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/13 19:53:29 by adel-ros          #+#    #+#             */
/*   Updated: 2017/01/13 19:56:52 by adel-ros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_lstsize(t_list *begin_list)
{
	size_t		count;
	t_list		*new;

	count = 0;
	new = begin_list;
	while (new)
	{
		count++;
		new = new->next;
	}
	return (count);
}
