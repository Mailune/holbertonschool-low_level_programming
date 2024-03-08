#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - multiplies two numbers
 *@argc: int argument
 *@argv: char type pointer argument
 *Return: the result of the multiplication followed by new line
 */
int main(int argc, char *argv[])
{
	int prod;

	if (argc == 3)
	{
		prod = atoi(argv[1]) * atoi(argv[2]);
		printf("%d", prod);
		return (0);
	}

	else
	{
		printf("Error\n");
		return (1);
	}
}

