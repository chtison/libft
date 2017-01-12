/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_init.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtison <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/01 16:34:40 by chtison           #+#    #+#             */
/*   Updated: 2016/04/01 16:58:09 by chtison          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft/misc/macros.h"
#include "libft/liblist/liblist.h"

t_list		*ft_list_init(void)
{
	t_list	*new;

	if (UNLIKELY((new = (t_list *)malloc(sizeof(*new))) == NULL))
		return (NULL);
	new->count = 0;
	new->list = NULL;
	new->deinit = &ft_list_deinit;
	new->reset = &ft_list_reset;
	new->push_front = &ft_list_push_front;
	new->pop_front = &ft_list_pop_front;
	new->push_back = &ft_list_push_back;
	new->pop_back = &ft_list_pop_back;
	new->push_at_index = &ft_list_push_at_index;
	new->pop_at_index = &ft_list_pop_at_index;
	new->peek_front = &ft_list_peek_front;
	new->peek_back = &ft_list_peek_back;
	new->peek_at_index = &ft_list_peek_at_index;
	new->map = &ft_list_map;
	return (new);
}
