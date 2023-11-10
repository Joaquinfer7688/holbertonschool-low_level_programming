#include "variadic_functions.h"
/**
 *print_numbers - function prints numbers followed a new line
 *@separator: string to be printed between numbers
 *@n: integers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (i > 0 && separator != NULL)
			printf("%s", separator);
		printf("%d", va_arg(args, int));
	}
	va_end(args);
	printf("\n");
}

