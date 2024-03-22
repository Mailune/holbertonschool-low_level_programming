#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_all - print anything
 *@format: list of types of arguments passed to the function
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *str;

	va_start(args, format);

	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					printf("(nil)");
				else
					printf("%s", str);
					break;
			break;

		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
		 format[i] == 's') && format[i + 1] != '\0')
			printf(", ");
		i++;
	}

	printf("\n");

	va_end(args);
}
