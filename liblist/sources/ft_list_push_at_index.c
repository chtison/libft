/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_at_index.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtison <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/01 16:34:58 by chtison           #+#    #+#             */
/*   Updated: 2016/04/01 17:00:00 by chtison          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft/misc/macros.h"
#include "libft/liblist/liblist.h"
#include "libft/liblist/headers/t_list_node.h"

static void	ft_sequel(t_list *object, t_list_node *new, size_t index)
{
	t_list_node	*browser;
	size_t		i;

	browser = object->list;
	i = 0;
	while (i < index)
	{
		browser = browser->next;
		++i;
	}
	new->prev = browser->prev;
	new->next = browser;
	browser->prev->next = new;
	browser->prev = new;
	object->count += 1;
	return ;
}

int		ft_list_push_at_index(t_list *object, const void *data,
			size_t index)
{
	t_list_node	*new;

	if (index > object->count)
		return (-1);
	if (index == object->count)
		return (object->push_back(object, data));
	if (index == 0)
		return (object->push_front(object, data));
	if (UNLIKELY((new = ft_list_create_node()) == NULL))
		return (-1);
	new->data = data;
	ft_sequel(object, new, index);
	return (0);
}
