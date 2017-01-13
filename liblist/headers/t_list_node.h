/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_list_node.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtison <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/01 16:45:18 by chtison           #+#    #+#             */
/*   Updated: 2016/04/01 16:45:23 by chtison          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_LIST_NODE_H
# define T_LIST_NODE_H

typedef	struct				s_list_node
{
	struct s_list_node		*prev;
	struct s_list_node		*next;
	const void			*data;
}					t_list_node;

#endif
