/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtison <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/01 16:33:57 by chtison           #+#    #+#             */
/*   Updated: 2016/04/01 17:17:34 by chtison          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft/misc/macros.h"
#include "libft/liblist/liblist.h"
#include "libft/libstd/libstd.h"
#include "libft/libstd/headers/ft_uitoa/struct_uitoa.h"

static int	ft_ft(const void **data, void *custom, size_t index)
{
	char	c;
	t_uitoa	*box;

	c = (char)(size_t)*data;
	box = (t_uitoa *)custom;
	box->str[box->index++] = c;
	return (0);
	index += 1;
}

char		*ft_uitoa(size_t nbr)
{
	t_list	*list;
	char	*str;
	t_uitoa	box;

	if (nbr == 0)
		return (ft_strdup("0"));
	list = ft_list_init();
	while (nbr)
	{
		list->push_front(list, (void *)(nbr % 10 + '0'));
		nbr /= 10;
	}
	if (UNLIKELY((str =
		(char *)malloc(sizeof(*str) * (list->count + 1))) == NULL))
		return ((char *)(long)list->deinit(list, NULL));
	str[list->count] = '\0';
	box.index = 0;
	box.str = str;
	list->map(list, &box, &ft_ft);
	list->deinit(list, NULL);
	return (str);
}
