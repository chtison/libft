#ifndef LIBINT_H
# define LIBINT_H

/// @file

# include "libft/libint/headers/t_int.h"
# include "libft/libint/headers/t_uint.h"

t_int	*ft_int_init(ssize_t nbr);
int		ft_int_deinit(t_int *this);
ssize_t	ft_int_get_nbr(t_int *this);
int		ft_int_get_overflow(t_int *this);
void	ft_int_add(t_int *this, ssize_t nbr);
void	ft_int_sub(t_int *this, ssize_t nbr);
void	ft_int_mul(t_int *this, ssize_t nbr);
void	ft_int_div(t_int *this, ssize_t nbr);
void	ft_int_mod(t_int *this, ssize_t nbr);

t_uint	*ft_uint_init(size_t nbr);
int		ft_uint_deinit(t_uint *this);
size_t	ft_uint_get_nbr(t_uint *this);
int		ft_uint_get_overflow(t_uint *this);
void	ft_uint_add(t_int *this, size_t nbr);
void	ft_uint_sub(t_int *this, size_t nbr);
void	ft_uint_mul(t_int *this, size_t nbr);
void	ft_uint_div(t_int *this, size_t nbr);
void	ft_uint_mod(t_int *this, size_t nbr);

#endif
