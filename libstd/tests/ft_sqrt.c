/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtison <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/01 16:37:39 by chtison           #+#    #+#             */
/*   Updated: 2016/04/01 16:37:40 by chtison          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <math.h>
#include "libft/libstd/libstd.h"

static void	ft_assert(double a, double b, char const *str)
{
	if (a == b)
		printf("\033[32;1mSuccess:\033[0m ");
	else
		printf("\033[31;1mFailure:\033[0m ");
	printf("%s -> %f ", str, a);
	if (a == b)
		printf("== %f\n", b);
	else
		printf("!= %f\n", b);
}

void		ft_test2(void)
{
	double	ret1;
	double	ret2;
	size_t	i;
	char	*str;

	i = 0;
	while (i < 1000)
	{
		ret1 = ft_sqrt(i);
		ret2 = sqrt(i);
		asprintf(&str, "ft_sqrt(%lu)", i);
		ft_assert(ret1, ret2, str);
		free(str);
		++i;
	}
	return ;
}

void		ft_test1(void)
{
	double	ret1;
	double	ret2;

	ret1 = ft_sqrt(42);
	ret2 = sqrt(42);
	ft_assert(ret1, ret2, "ft_sqrt(42)");
	ret1 = ft_sqrt(-1);
	ret2 = sqrt(-1);
	ft_assert(ret1, ret2, "ft_sqrt(-1)");
	ret1 = ft_sqrt(0);
	ret2 = sqrt(0);
	ft_assert(ret1, ret2, "ft_sqrt(0)");
	ret1 = ft_sqrt(121);
	ret2 = sqrt(121);
	ft_assert(ret1, ret2, "ft_sqrt(121)");
	ret1 = ft_sqrt(M_PI);
	ret2 = sqrt(M_PI);
	ft_assert(ret1, ret2, "ft_sqrt(M_PI)");
	return ;
}

int			main(void)
{
	printf("\033[34m### \033[1mft_sqrt(:)\033[0m\n");
	ft_test1();
	return (0);
	ft_assert(0, 0, 0);
	ft_test2();
}
