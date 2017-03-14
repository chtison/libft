#include <stdlib.h>
#include "libft/misc/macros.h"
#include "libft/libstd/libstd.h"
#include "libft/libint/headers/t_int.h"

t_int	*ft_int_init(ssize_t nbr)
{
	t_int	*new;

	new = (t_int *)malloc(sizeof(*new));
	if (UNLIKELY(ISNULL(new)))
		return (NULL);
	ft_bzero(new, sizeof(new));
	new->nbr = nbr;
	return (new);
}
