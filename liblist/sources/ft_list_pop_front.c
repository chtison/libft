/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_pop_front.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtison <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/01 16:34:55 by chtison           #+#    #+#             */
/*   Updated: 2016/04/01 17:13:17 by chtison          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft/liblist/headers/t_list.h"
#include "libft/liblist/headers/t_list_node.h"

void	*ft_list_pop_front(t_list *object)
{
	void			*data;
	t_list_node		*next;

	data = (void *)object->list->data;
	if (object->list->next == object->list)
	{
		free(object->list);
		object->list = NULL;
	}
	else
	{
		next = object->list->next;
		next->prev = object->list->prev;
		object->list->prev->next = next;
		free(object->list);
		object->list = next;
	}
	object->count -= 1;
	return (data);
}
