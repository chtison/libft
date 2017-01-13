/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   liblist.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtison <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/01 16:46:26 by chtison           #+#    #+#             */
/*   Updated: 2016/04/01 16:48:21 by chtison          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBLIST_H
# define LIBLIST_H

/*
** This library is an implementation of a linked list
*/

# include <stddef.h>
# include "libft/liblist/headers/t_list.h"
# include "libft/liblist/headers/t_list_node.h"

/*
** ------------------------------- Public ---------------------------------- **
*/

/*
** =============================== Lifecyle of the list
** [Constructor]
** Create an object of type (t_list *) wich represent a list
** [Properties]
** - count: the number of items in the list. DO NOT MODIFY this value
** [Returns] The newly created object, NULL otherwise
*/
t_list		*ft_list_init(void);

/*
** [Destructor]
** [Parameters]
** - f: a function which will be called on every data in the list. Can be NULL
** [Returns] Always 0
*/
int		ft_list_deinit(t_list *object,
			void (*f)(void *data));

/*
** [Reseter]
** Note that this function is called by the destructor before destroying itself
** [Parameters]
** - f: a function which will be called on every data in the list. Can be NULL
** [Returns] Always 0
*/
int		ft_list_reset(t_list *object,
			void (*f)(void *data));

/*
** =============================== Add things to the list
** [Push]
** Front -> [1, 2, 3] <- back
** Index starts from 0
** [Parameters]
** - data: the data you wish to save in the list
** [Returns] 0 on success
*/
int		ft_list_push_front(t_list *object,
			const void *data);

int		ft_list_push_back(t_list *object,
			const void *data);

int		ft_list_push_at_index(t_list *object,
			const void *data,
			size_t index);

/*
** =============================== Look things in the list
** [Peek]
** [[WARNING]] List must not be empty
** [Returns] A data you previously pushed
*/
void		*ft_list_peek_front(const t_list *object);

void		*ft_list_peek_back(const t_list *object);

void		*ft_list_peek_at_index(const t_list *object,
			size_t index);

/*
** =============================== Retrieve things from the list
** [Pop]
** [[WARNING]] List must not be empty
** [Returns] A data you previously pushed, after deleting its node
*/
void		*ft_list_pop_front(t_list *object);

void		*ft_list_pop_back(t_list *object);

void		*ft_list_pop_at_index(t_list *object,
			size_t index);

/*
** =============================== Through the list
** [Map]
** The function you provide can return:
** - 0 to continue
** - 1 to stop
** - 2 to delete (and continue)
** - 3 to delete (and stop)
*/
void		ft_list_map(t_list *object,
			void *custom,
			int (*f)(const void **data, void *custom, size_t i));

/*
** ------------------------------- Internal -------------------------------- **
*/

/*
** [Returns] New empty node or NULL on failure
*/
t_list_node	*ft_list_create_node(void);

/*
** [Returns] Always 0
*/
int		ft_list_delete_node(t_list *object,
			t_list_node *node);

#endif
