#include <stdio.h>
#include "libft/libtest/headers/libtest_macros.h"

int	ft_test_equal(int const condition, char const *lhs, char const *rhs)
{
	if (condition)
		printf("%s %s == %s\n", FT_TEST_SUCCESS, lhs, rhs);
	else
		printf("%s %s != %s\n", FT_TEST_FAILURE, lhs, rhs);
	return (condition);
}
