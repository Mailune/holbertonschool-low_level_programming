#include "main.h"
#include <stdio.h>

/**
 *is_prime_number - check if the number is a prime one
 *@n: the int to check
 * Return: 1 if prime number otherwise 0
 */
int is_prime_number(int n)
{
	int i;

	if (n <= 1)
	{
		return (0);
	}

	for (i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
		return (0);
		}
	}

	return (1);
}
