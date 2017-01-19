/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstend.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-ros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/13 20:02:15 by adel-ros          #+#    #+#             */
/*   Updated: 2017/01/16 12:54:03 by adel-ros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstend(t_list **alst, t_list *new)
{
	t_list *start;

	start = *alst;
	if (start == NULL)
	{
		start = new;
		new->next = NULL;
	}
	while (start->next != NULL)
		start = start->next;
	start->next = new;
}
