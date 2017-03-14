#include "libft/libstd/libstd.h"

void	*ft_bzero(void *data, size_t n)
{
	return (ft_memset(data, 0, n));
}
