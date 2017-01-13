/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libstd.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtison <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/01 16:35:27 by chtison           #+#    #+#             */
/*   Updated: 2016/04/01 16:35:28 by chtison          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBSTD_H
# define LIBSTD_H

# include <stddef.h>
# include <unistd.h>

size_t	ft_strlen(const char *str);

/*
** [[WARNING]] You must free the pointer returned from these functions
** [Returns] A duplicate malloc'd string or NULL on failure
*/
char	*ft_strdup(const char *str);
char	*ft_strndup(const char *str, size_t n);

/*
** [[WARNING]] You must free the pointer returned from these functions
** [Returns] A new malloc'd string of the concatenation of s1 and s2 or NULL
*/
char	*ft_strcat(const char *s1, const char *s2);
char	*ft_strcat_and_free(char *s1, char *s2, int free_s1, int free_s2);

/*
** Signed and unsigned integer to ascii
** [[WARNING]] You must free the pointer returned from these functions
** [Returns] A malloc'd string or NULL on failure
*/
char	*ft_itoa(ssize_t nbr);
char	*ft_uitoa(size_t nbr);

/*
** [Returns] (int)(*(const unsigned char *)s1 - *(const unsigned char *)s2)
*/
int	ft_strcmp(const char *s1, const char *s2);

/*
** [Returns] Always 0
*/
int	ft_free(void *ptr);

#endif
