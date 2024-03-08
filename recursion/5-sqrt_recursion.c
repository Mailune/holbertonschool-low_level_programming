#include "main.h"
#include <stdio.h>
/**
 *_sqrt_recursion - return the natural square root of a number
 *@n: the number to calculate the square root
 * Return: the square root of a number or -1 if there is not
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);

	return (find_sqrt(n, 1));
}

/**
*find_sqrt - find the square root
*@n: number to calculate the square root
*@guess: supposed square root
*Return: the square root of a number or -1 if there is not
*/

int find_sqrt(int n, int guess)
{
	if (guess * guess == n)
		return (guess);

	if (guess * guess > n)
		return (-1);

	return (find_sqrt(n, guess + 1));
}
