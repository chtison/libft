/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_init.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtison <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/01 16:47:23 by chtison           #+#    #+#             */
/*   Updated: 2016/04/01 17:18:24 by chtison          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft/macros.h"
#include "libft/liblist/liblist.h"

void	ft_test1(void)
{
	t_list	*list;

	if (UNLIKELY((list = ft_list_init()) == NULL))
	{
		printf("ft_list_init() -> NULL (malloc failed)\n");
		return ;
	}
	if (list->list != NULL)
		printf("\033[31;1mFailure: \033[0mlist->list != NULL\n");
	else
		printf("\033[32;1mSuccess: \033[0mlist->list == NULL\n");
	if (list->count != 0)
		printf("\033[31;1mFailure: \033[0mlist->_count != 0\n");
	else
		printf("\033[32;1mSuccess: \033[0mlist->_count == 0\n");
	list->deinit(list, NULL);
	return ;
}

int		main(void)
{
	printf("\033[34m### \033[1mft_list_init() "
		"&& ft_list_deinit(:, :)\033[0m\n");
	ft_test1();
	return (0);
}
