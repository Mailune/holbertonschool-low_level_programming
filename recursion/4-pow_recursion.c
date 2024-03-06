#include "main.h"
#include <stdio.h>
/**
 *_pow_recursion - return the value of x raised to the power of y
 *@y:int
 *@x:int
 *Return: x raised to the power of y. y is less 0 function should return -1.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	else
	return (x * _pow_recursion(x, y - 1));
}
