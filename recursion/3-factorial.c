#include "main.h"
#include <stdio.h>

/**
 *factorial - return the factorial of a given number
 *@n: int
 * Return: the factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0 || n == 1)
		return (1);

	else
	return (n * factorial(n - 1));
}
