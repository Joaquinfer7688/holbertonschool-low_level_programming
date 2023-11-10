#include "variadic_functions.h"
/**
 *print_strings - print strings followed by a new line
 *@separator: string to be printed between the strings
 *@n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *j;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (separator != NULL && i > 0)
			printf("%s", separator);

		if (j == NULL)
			printf("(nil)");
		else
			printf("%s", j);
	}
	va_end(args);
	printf("\n");
}
