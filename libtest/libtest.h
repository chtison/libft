#ifndef LIBTEST_H
# define LIBTEST_H

/// @file

/*!
* @brief Test a value and print a formated sentence on stdout.
 * @param condition Determines if test is successful or not.
 * @param lhs Left hand side.
 * @param rhs Right hand side.
 * @return Returns the condition parameter.
 */
int		ft_test_equal(int const condition, const char *lhs, const char *rhs);

/*!
 * @brief Test a value and print a formated sentence on stdout.
 * @param condition Determines if test is successful or not.
 * @param lhs Left hand side.
 * @param rhs Right hand side.
 * @return Returns the condition parameter.
 */
int		ft_test_nequal(int const condition, const char *lhs, const char *rhs);

/*!
 * @param message The message you want to be printed on stdout.
 */
void	ft_test_info(char const *message);

#endif
