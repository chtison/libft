/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   macros.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtison <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/01 18:03:04 by chtison           #+#    #+#             */
/*   Updated: 2016/04/01 18:03:05 by chtison          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MACROS_H
# define MACROS_H

/// @file

# define LIKELY(x)		__builtin_expect(!!(x), 1)
# define UNLIKELY(x)	__builtin_expect(!!(x), 0)

# define SUCCESS		0
# define FAILURE		0

# define ISNULL(x)		((x) == NULL)

#endif
