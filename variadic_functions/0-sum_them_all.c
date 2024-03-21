#include "variadic_functions.h"
#include <stdarg.h>
/**
 *sum_them_all - sum of all the paramaters
 *@n: numbers of parameters in the function
 *
 *
 * Return: 0 if n == 0 otherwise the sum of the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int index;
	int sum = 0;
	va_list args;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);

	for (index = 0; index < n; index++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
