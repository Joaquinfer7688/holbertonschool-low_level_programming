#include "main.h"
/**
 * puts2 - prints every other character of a string
 *@str: string to print the chars from
 */
void puts2(char *str)
{
	int a, b;

	a = 0;

	while (str[a] != '\0')
	{
		a++;
	}

	for (b = 0; b < a; b += 2)
	{
		_putchar(str[b]);
	}

		_putchar('\n');
}
