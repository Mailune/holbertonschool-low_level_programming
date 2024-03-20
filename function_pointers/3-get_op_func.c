#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - Selects the correct function to perform the operation
 *@s: Operator passed as argument to the program
 *
 * Return: Pointer to the function corresponding to the operator
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int indice = 0;

	while (ops[indice].op != NULL)
	{
		if (*(ops[indice].op) == *s && *(s + 1) == '\0')
			return (ops[indice].f);
		indice++;
	}

	return (NULL);
}
