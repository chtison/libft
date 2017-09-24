#ifndef LIBSTD_H
# define LIBSTD_H

# include <stddef.h>

void	*ft_memset(void *data, int c, size_t len);
void	*ft_bzero(void *data, size_t len);

void	ft_free(void *ptr);

size_t	ft_strlen(const char *str);

#endif
