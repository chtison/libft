/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reset.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtison <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/01 16:35:03 by chtison           #+#    #+#             */
/*   Updated: 2016/04/01 16:58:27 by chtison          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft/liblist/headers/t_list.h"

void	*ft_list_reset(t_list *object,
			void (*f)(void *data))
{
	void	*data;

	while (object->list != NULL)
	{
		data = object->pop_front(object);
		if (f)
			f(data);
	}
	return (NULL);
}
