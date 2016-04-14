/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtison <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/01 16:34:41 by chtison           #+#    #+#             */
/*   Updated: 2016/04/01 17:16:17 by chtison          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft/liblist/liblist.h"

void	ft_list_map(t_list *object,
			void *custom,
			int (*f)(const void **data, void *custom, size_t index))
{
	t_list_node		*browser;
	size_t			i;
	int				ret;

	browser = object->list;
	if (browser == NULL)
		return ;
	i = 0;
	while (browser->next != object->list)
	{
		ret = f((void *)&browser->data, custom, i);
		browser = browser->next;
		if (ret & 2)
			ft_list_delete_node(object, browser->prev);
		if (ret & 1)
			return ;
		++i;
	}
	if (f((void *)&browser->data, custom, i) & 2)
		ft_list_delete_node(object, browser);
	return ;
}
