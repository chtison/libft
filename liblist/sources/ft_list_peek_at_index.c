/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_peek_at_index.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtison <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/01 16:34:43 by chtison           #+#    #+#             */
/*   Updated: 2016/04/01 17:15:51 by chtison          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft/liblist/headers/t_list.h"

void	*ft_list_peek_at_index(const t_list *object, size_t index)
{
	size_t		i;
	t_list_node	*browser;

	if (object->list == NULL)
		return (NULL);
	i = 0;
	browser = object->list;
	while (i++ < index)
		browser = browser->next;
	return ((void *)browser->data);
}
