/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtison <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/01 16:47:30 by chtison           #+#    #+#             */
/*   Updated: 2016/04/01 17:19:48 by chtison          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft/macros.h"
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

void		ft_test1(t_list *list)
{
	size_t	ret;

	list->push_back(list, (void *)(size_t)3);
	list->push_back(list, (void *)(size_t)2);
	list->push_back(list, (void *)(size_t)1);
	printf("\033[34;1mlist:\033[22m [3, 2, 1]\033[0m\n");
	ft_assert(list->count, 3, "list->count");
	ret = (size_t)list->pop_back(list);
	ft_assert(ret, 1, "list->pop_back(list)");
	ft_assert(list->count, 2, "list->count");
	ret = (size_t)list->pop_back(list);
	ft_assert(ret, 2, "list->pop_back(list)");
	ft_assert(list->count, 1, "list->count");
	ret = (size_t)list->pop_back(list);
	ft_assert(ret, 3, "list->pop_back(list)");
	ft_assert(list->count, 0, "list->count");
	ft_assert((size_t)list->list, 0, "list->list");
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
	printf("\033[34m### \033[1mft_list_push_back(:, :)"
		" && ft_list_pop_back(:)\033[0m\n");
	ft_test1(list);
	list->deinit(list, NULL);
	return (0);
}
