/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_delete_node.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtison <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/01 16:34:38 by chtison           #+#    #+#             */
/*   Updated: 2016/04/01 16:58:45 by chtison          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft/liblist/liblist.h"

int		ft_list_delete_node(t_list *object, t_list_node *node)
{
	if (object->list == node)
		ft_list_pop_front(object);
	else
	{
		node->prev->next = node->next;
		node->next->prev = node->prev;
		free(node);
		object->count -= 1;
	}
	return (0);
}
