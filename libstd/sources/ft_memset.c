#include <stddef.h>

void	*ft_memset(void *data, int c, size_t len)
{
	size_t			i;
	unsigned char	*d;

	d = (unsigned char *)data;
	i = 0;
	while (i < len)
		d[i++] = (unsigned char)c;
	return (data);
}
