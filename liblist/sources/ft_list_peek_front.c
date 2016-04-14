/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_peek_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtison <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/01 16:34:47 by chtison           #+#    #+#             */
/*   Updated: 2016/04/01 17:15:36 by chtison          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft/liblist/headers/t_list.h"

void	*ft_list_peek_front(const t_list *object)
{
	if (object->list == NULL)
		return (NULL);
	return ((void *)object->list->data);
}
