#include "main.h"
/**
 * swap_int - swap the value of two integers
 *@a: first int to swap
 *@b: second int to swap
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
