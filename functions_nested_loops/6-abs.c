#include "main.h"
#include <stdio.h>
/**
* _abs - computes the absolute value of an integer
* @r: integer to compute
*
* Return: absolute value of number r
*/
int _abs(int r)
{
	if (r >= 0)
	{
		return (r);
	}

	else
		return (-r);
}
