/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtison <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/01 16:33:48 by chtison           #+#    #+#             */
/*   Updated: 2016/04/01 16:33:49 by chtison          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft/misc/macros.h"
#include "libft/libstd/libstd.h"

char	*ft_strcat(const char *s1, const char *s2)
{
	size_t	len;
	char	*new;
	size_t	i;
	size_t	j;

	len = ft_strlen(s1) + ft_strlen(s2);
	if (UNLIKELY((new = (char *)malloc(sizeof(*new) * (len + 1))) == NULL))
		return (NULL);
	new[len] = '\0';
	i = 0;
	while (s1[i])
	{
		new[i] = s1[i];
		++i;
	}
	j = 0;
	while (s2[j])
		new[i++] = s2[j++];
	return (new);
}
