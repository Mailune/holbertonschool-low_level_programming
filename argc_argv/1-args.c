#include "main.h"
#include <stdio.h>
/**
 *main - print the number of the argument
 *@argc: int argument
 *@argv: char type pointer argument
 *Return:0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}

