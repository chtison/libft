/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat_and_free.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtison <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/01 16:33:50 by chtison           #+#    #+#             */
/*   Updated: 2016/04/01 16:33:51 by chtison          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft/libstd/libstd.h"

char	*ft_strcat_and_free(char *s1, char *s2, int free_s1, int free_s2)
{
	char	*new;

	if (s1 == NULL)
	{
		if (s2 != NULL && free_s2)
			free(s2);
		return (NULL);
	}
	if (s2 == NULL)
	{
		if (s1 != NULL && free_s1)
			free(s1);
		return (NULL);
	}
	new = ft_strcat(s1, s2);
	if (free_s1)
		free(s1);
	if (free_s2)
		free(s2);
	return (new);
}
