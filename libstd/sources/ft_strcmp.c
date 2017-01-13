/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtison <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/01 16:33:51 by chtison           #+#    #+#             */
/*   Updated: 2016/04/01 16:33:52 by chtison          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int		ft_strcmp(const char *s1, const char *s2)
{
	const unsigned char	*us1;
	const unsigned char	*us2;
	size_t			i;

	us1 = (const unsigned char *)s1;
	us2 = (const unsigned char *)s2;
	i = 0;
	while (us1[i] && us2[i] && us1[i] == us2[i])
		++i;
	return (us1[i] - us2[i]);
}
