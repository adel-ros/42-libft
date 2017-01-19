/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-ros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 18:36:14 by adel-ros          #+#    #+#             */
/*   Updated: 2017/01/12 18:45:15 by adel-ros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	while (*alst)
	{
		if ((*alst)->content)
		{
			del((*alst)->content, (*alst)->content_size);
			free(*alst);
		}
		(*alst) = (*alst)->next;
	}
	(*alst) = NULL;
}
