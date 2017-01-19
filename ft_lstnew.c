/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-ros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/21 16:29:46 by adel-ros          #+#    #+#             */
/*   Updated: 2017/01/12 14:08:18 by adel-ros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;
	void	*data;

	data = (void *)content;
	if (!(new = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (content == NULL || content_size == 0)
	{
		new->content = NULL;
		new->content_size = 0;
		new->next = NULL;
		return (new);
	}
	else
	{
		if (!(new->content = malloc(content_size)))
			return (NULL);
		ft_memcpy((new->content), content, content_size);
		new->content_size = content_size;
		new->next = NULL;
	}
	return (new);
}
