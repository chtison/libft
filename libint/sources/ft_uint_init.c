#include <stdlib.h>
#include "libft/misc/macros.h"
#include "libft/libstd/libstd.h"
#include "libft/libint/headers/t_uint.h"

t_uint	*ft_uint_init(size_t nbr)
{
	t_uint	*new;

	new = (t_uint *)malloc(sizeof(*new));
	if (UNLIKELY(ISNULL(new)))
		return (NULL);
	ft_bzero(new, sizeof(new));
	new->nbr = nbr;
	return (new);
}
