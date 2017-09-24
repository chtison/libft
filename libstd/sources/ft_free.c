#include <stdlib.h>

int		ft_free(void **ptr)
{
	if (*ptr != NULL)
	{
		free(*ptr);
		*ptr = NULL;
	}
	return (0);
}
