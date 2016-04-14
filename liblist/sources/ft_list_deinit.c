/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_deinit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtison <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/01 16:34:37 by chtison           #+#    #+#             */
/*   Updated: 2016/04/01 16:34:38 by chtison          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft/liblist/headers/t_list.h"

int		ft_list_deinit(t_list *object,
			void (*f)(void *data))
{
	object->reset(object, f);
	free(object);
	return (0);
}
