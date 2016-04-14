/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtison <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/01 16:37:43 by chtison           #+#    #+#             */
/*   Updated: 2016/04/01 16:37:44 by chtison          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
#include "libft/libstd/libstd.h"

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

void		ft_test1(void)
{
	size_t	len;

	len = ft_strlen("Hello World !");
	ft_assert(len, 13, "ft_strlen(\"Hello World !\")");
	len = ft_strlen("");
	ft_assert(len, 0, "ft_strlen(\"\")");
	return ;
}

int			main(void)
{
	printf("\033[34m### \033[1mft_strlen(:)\033[0m\n");
	ft_test1();
	return (0);
}
