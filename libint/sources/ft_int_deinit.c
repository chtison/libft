#include <stdlib.h>
#include "libft/libint/headers/t_int.h"

int		ft_uint_deinit(t_int *this)
{
	free(this);
	return (0);
}
