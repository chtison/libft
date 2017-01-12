/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtison <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/01 16:35:01 by chtison           #+#    #+#             */
/*   Updated: 2016/04/01 16:59:07 by chtison          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft/misc/macros.h"
#include "libft/liblist/liblist.h"
#include "libft/liblist/headers/t_list_node.h"

int		ft_list_push_front(t_list *object,
			const void *data)
{
	t_list_node	*new;

	if (UNLIKELY(!(new = ft_list_create_node())))
		return (-1);
	new->data = data;
	if (object->list == NULL)
	{
		new->prev = new;
		new->next = new;
		object->list = new;
	}
	else
	{
		new->prev = object->list->prev;
		new->next = object->list;
		new->prev->next = new;
		new->next->prev = new;
		object->list = new;
	}
	object->count += 1;
	return (0);
}
