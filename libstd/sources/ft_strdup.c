/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtison <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/01 16:33:53 by chtison           #+#    #+#             */
/*   Updated: 2016/04/01 16:33:54 by chtison          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libstd/libstd.h"

char	*ft_strdup(const char *str)
{
	return (ft_strndup(str, ft_strlen(str)));
}