#include <stdlib.h>
#include "libft/libint/headers/t_uint.h"

int		ft_uint_deinit(t_uint *this)
{
	free(this);
	return (0);
}
