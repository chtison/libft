#include "libft/libtest/libtest.h"

int	main(void)
{
	ft_test_info("Success tests");
	ft_test_equal(1 == 1, "1", "1");
	ft_test_nequal(42, "42", "0");
	ft_test_info("Fail tests");
	ft_test_equal(0 == 1, "0", "1");
	ft_test_nequal(0, "0", "0");
	ft_test_info("End fail tests");
}
