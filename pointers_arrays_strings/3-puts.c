#include "main.h"
/**
 * _puts - function what prints a string followed a new line
 *@str: string to print
 *Return: void
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}

		_putchar('\n');
}
