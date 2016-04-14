/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_list.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtison <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/01 16:45:27 by chtison           #+#    #+#             */
/*   Updated: 2016/04/01 16:46:10 by chtison          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_LIST_H
# define T_LIST_H

# include <stddef.h>
# include "libft/liblist/headers/t_list_node.h"

typedef	struct s_list_object	t_list;

struct					s_list_object
{
	int					(*deinit)(t_list *, void (*)(void *));
	int					(*reset)(t_list *, void (*)(void *));

	int					(*push_front)(t_list *, const void *);
	int					(*push_back)(t_list *, const void *);
	int					(*push_at_index)(t_list *, const void *, size_t);

	void				*(*peek_front)(const t_list *);
	void				*(*peek_back)(const t_list *);
	void				*(*peek_at_index)(const t_list *, size_t index);

	void				*(*pop_front)(t_list *);
	void				*(*pop_back)(t_list *);
	void				*(*pop_at_index)(t_list *, size_t);

	void				(*map)(t_list *,
							void *, int (*)(const void **, void *, size_t));

	int					(*set)(t_list *,
							const char *key,
							const void *data);
	void				*(*get)(t_list *,
							const char *key);
	void				*(*remove)(t_list *,
							const char *key);

	t_list_node			*list;
	size_t				count;
};

#endif
