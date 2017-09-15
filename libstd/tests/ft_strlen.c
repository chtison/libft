#include <string.h>
#include <stdio.h>
#include "libft/libstd/libstd.h"
#include "libft/libtest/libtest.h"

const char	*strs[] = {
	"",
	"Hello World !",
	"👻😆 🗑😙",
};

static int	ft_test(const char *str)
{
	size_t	l1;
	size_t	l2;
	char	*s1;
	char	*s2;

	l1 = strlen(str);
	l2 = ft_strlen(str);
	asprintf(&s1, "%lu", l1);
	asprintf(&s2, "%lu", l2);
	return (ft_test_equal(l1 == l2, s1, s2));
}

int		main(void)
{
	size_t	i;
	int		err;

	printf("TEST ft_strlen\n");
	err = 0;
	i = 0;
	while (i < sizeof(strs)/sizeof(*strs))
	{
		err += ft_test(strs[i]);
		++i;
	}
	if (err == 0)
		printf("OK\n");
	return (0);
}
