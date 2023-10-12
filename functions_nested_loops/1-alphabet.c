#include "main.h"
/**
 * print_alphabet - print the English alphabet from A to Z
 *
 * Return:0
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
	_putchar(letter);
	}
	_putchar('\n');

}

