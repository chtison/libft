#ifndef T_INT_H
# define T_INT_H

# include <unistd.h>

typedef	struct	s_int
{
	ssize_t		nbr;
	int			overflow;
}				t_int;

#endif
