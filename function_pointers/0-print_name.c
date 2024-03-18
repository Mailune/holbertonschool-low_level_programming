#include <stdlib.h>
#include "function_pointers.h"
/**
 *print_name - prints a name
 *@name: name to print
 *@f: a pointer to a function that print a name
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
