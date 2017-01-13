/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtison <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/01 16:47:25 by chtison           #+#    #+#             */
/*   Updated: 2016/04/01 17:20:39 by chtison          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft/misc/macros.h"
#include "libft/liblist/liblist.h"

static void	ft_assert(size_t a, size_t b, char const *str)
{
	if (a == b)
		printf("\033[32;1mSuccess:\033[0m ");
	else
		printf("\033[31;1mFailure:\033[0m ");
	printf("%s -> %lu ", str, a);
	if (a == b)
		printf("== %lu\n", b);
	else
		printf("!= %lu\n", b);
}

static int	ft_ft(const void **data, void *custom, size_t index)
{
	*(size_t *)custom += (size_t)*data;
	return (0);
	++index;
}

static int	ft_ft2(const void **data, void *custom, size_t index)
{
	if (index == 1)
		return (3);
	return (2);
	*(char *)custom = 1;
	*(char *)data = 1;
}

void		ft_test1(t_list *list)
{
	size_t	ret;

	list->push_front(list, (void *)(size_t)3);
	list->push_front(list, (void *)(size_t)2);
	list->push_front(list, (void *)(size_t)1);
	printf("\033[34;1mlist:\033[22m [1, 2, 3]\033[0m\n");
	ret = 0;
	list->map(list, &ret, &ft_ft);
	ft_assert(ret, 6, "list->map(list, &ft_sum, &ret); ret");
	list->reset(list, NULL);
	list->push_front(list, (void *)(size_t)3);
	list->push_front(list, (void *)(size_t)2);
	list->push_front(list, (void *)(size_t)1);
	printf("\033[34;1mlist:\033[22m [1, 2, 3]\033[0m\n");
	list->map(list, NULL, &ft_ft2);
	ft_assert(list->count, 1, "list->count");
	list->map(list, NULL, &ft_ft2);
	ft_assert(list->count, 0, "list->count");
	return ;
}

int			main(void)
{
	t_list	*list;

	if (UNLIKELY((list = ft_list_init()) == NULL))
	{
		printf("ft_list_init() -> NULL (malloc failed)\n");
		return (1);
	}
	printf("\033[34m### \033[1mft_list_map(:, :)\033[0m\n");
	ft_test1(list);
	list->deinit(list, NULL);
	return (0);
}
