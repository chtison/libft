/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_pop_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtison <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/01 16:34:53 by chtison           #+#    #+#             */
/*   Updated: 2016/04/01 17:14:04 by chtison          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft/liblist/headers/t_list.h"
#include "libft/liblist/headers/t_list_node.h"

void	*ft_list_pop_back(t_list *object)
{
	void			*data;
	t_list_node		*prev;

	data = (void *)object->list->prev->data;
	if (object->list->prev == object->list)
	{
		free(object->list);
		object->list = NULL;
	}
	else
	{
		prev = object->list->prev->prev;
		prev->next = object->list;
		free(object->list->prev);
		object->list->prev = prev;
	}
	object->count -= 1;
	return (data);
}
