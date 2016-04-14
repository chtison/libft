/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_peek_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtison <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/01 16:47:27 by chtison           #+#    #+#             */
/*   Updated: 2016/04/01 16:47:28 by chtison          ###   ########.fr       */
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

	list->push_front(list, (void *)(size_t)3);
	list->push_front(list, (void *)(size_t)2);
	list->push_front(list, (void *)(size_t)1);
	printf("\033[34;1mlist:\033[22m [1, 2, 3]\033[0m\n");
	ret = (size_t)list->peek_front(list);
	ft_assert(ret, 1, "list->peek_front(list)");
	ret = (size_t)list->peek_back(list);
	ft_assert(ret, 3, "list->peek_back(list)");
	ret = (size_t)list->peek_at_index(list, 1);
	ft_assert(ret, 2, "list->peek_at_index(list, 1)");
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
	printf("\033[34m### \033[1mft_list_peek_{front, back}(:) "
		"&& ft_list_peek_at_index(::)\033[0m\n");
	ft_test1(list);
	list->deinit(list, NULL);
	return (0);
}
