#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_numbers - Prints numbers, followed by a new line.
 *@separator: string to print between numbers
 *@n: number of integers in the function
 *@...: variable number of numbers to print
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int index;

	va_start(args, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(args, int));

	if (index != n - 1 && separator != NULL)
		printf("%s", separator);
	}

		printf("\n");

	va_end(args);
}
