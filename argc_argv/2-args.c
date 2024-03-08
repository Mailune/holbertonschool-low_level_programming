#include "main.h"
#include <stdio.h>
/**
 *main - prints all arguments it received
 *@argc: int argument
 *@argv: char type pointer argument
 *Return:0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)

		printf("%s\n", argv[i]);

	return (0);
}

