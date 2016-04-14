/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtison <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/01 16:37:41 by chtison           #+#    #+#             */
/*   Updated: 2016/04/01 16:37:42 by chtison          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "libft/libstd/libstd.h"

static void	ft_assert_str(const char *s1, const char *s2)
{
	int	cmp;

	cmp = ft_strcmp(s1, s2);
	if (cmp == 0)
		printf("\033[32;1mSuccess:\033[0m ");
	else
		printf("\033[31;1mFailure:\033[0m ");
	printf("ft_strcmp(\"%s\", \"%s\") -> %d ", s1, s2, cmp);
	if (cmp == 0)
		printf("== 0\n");
	else
		printf("!= 0\n");
}

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
	char	*str;

	printf("\033[34;1m-\033[22m ft_strcat(\"Hello\", \" World !\")\033[0m\n");
	str = ft_strcat("Hello", " World !");
	ft_assert_str(str, "Hello World !");
	free(str);
	return ;
}

int			main(void)
{
	printf("\033[34m### \033[1mft_strcat(:, :)\033[0m\n");
	ft_test1();
	return (0);
	ft_assert(0, 0, 0);
}
