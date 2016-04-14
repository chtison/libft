/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_pop_at_index.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtison <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/01 16:34:50 by chtison           #+#    #+#             */
/*   Updated: 2016/04/01 17:14:52 by chtison          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft/liblist/headers/t_list.h"

void	*ft_list_pop_at_index(t_list *object,
			size_t index)
{
	t_list_node		*browser;
	size_t			i;
	void			*data;

	if (index >= object->count)
		return (NULL);
	if (index == (object->count - 1))
		return (object->pop_back(object));
	if (index == 0)
		return (object->pop_front(object));
	browser = object->list;
	i = 0;
	while (i < index)
	{
		browser = browser->next;
		++i;
	}
	data = (void *)browser->data;
	browser->next->prev = browser->prev;
	browser->prev->next = browser->next;
	object->count -= 1;
	return (data);
}
