/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-ros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/21 17:15:54 by adel-ros          #+#    #+#             */
/*   Updated: 2017/01/12 20:55:33 by adel-ros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;

	if (!lst || !f)
		return (NULL);
	while (lst)
	{
		new = f(lst);
		new->next = ft_lstmap(lst->next, f);
		return (new);
	}
	return (NULL);
}
