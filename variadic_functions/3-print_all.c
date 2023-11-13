#include "variadic_functions.h"
/**
 *print_all - function that print anything
 *@format: list of types of arguments passed to the function
 *
 */
void print_all(const char * const format, ...)
{
	unsigned int i, a, separator = 0;
	char *j;
	char c_args[] = "cifs";
	va_list args;

	va_start(args, format);
	i = 0;
	while (format && format[i])
	{
		a = 0;
		while (c_args[a])
		{
			if (format[i] == c_args[a] && separator)
			{
				printf(", ");
				break;
			} a++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int)), separator = 1;
				break;
			case 'i':
				printf("%d", va_arg(args, int)), separator = 1;
				break;
			case 'f':
				printf("%f", va_arg(args, double)), separator = 1;
				break;
			case 's':
				j = va_arg(args, char *), separator = 1;
				if (!j)
				{
					printf("(nil)");
					break;
				}
				printf("%s", j);
				break;
		} i++;
	} va_end(args), printf("\n");
}
