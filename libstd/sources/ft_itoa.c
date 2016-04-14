/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtison <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/01 16:33:45 by chtison           #+#    #+#             */
/*   Updated: 2016/04/01 16:33:46 by chtison          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft/libstd/libstd.h"

char	*ft_itoa(ssize_t nbr)
{
	if (nbr < 0)
		return (ft_strcat_and_free("-", ft_uitoa((size_t)(nbr * -1)), 0, 1));
	return (ft_uitoa((size_t)nbr));
}
