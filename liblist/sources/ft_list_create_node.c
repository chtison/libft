/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_create_node.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtison <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/01 16:34:35 by chtison           #+#    #+#             */
/*   Updated: 2016/04/01 16:34:36 by chtison          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft/misc/macros.h"
#include "libft/liblist/headers/t_list_node.h"

t_list_node	*ft_list_create_node(void)
{
	t_list_node	*new;

	if (UNLIKELY((new = (t_list_node *)malloc(sizeof(*new))) == NULL))
		return (NULL);
	return (new);
}
