/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtison <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/01 16:33:56 by chtison           #+#    #+#             */
/*   Updated: 2016/04/01 16:33:56 by chtison          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft/misc/macros.h"

char	*ft_strndup(const char *str, size_t n)
{
	char	*new;
	size_t	i;

	i = 0;
	while (str[i] && i < n)
		++i;
	if (UNLIKELY((new = (char *)malloc(sizeof(*str) * (i + 1))) == NULL))
		return (NULL);
	new[i] = '\0';
	while (i--)
		new[i] = str[i];
	return (new);
}
