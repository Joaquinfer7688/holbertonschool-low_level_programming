#include "main.h"
/**
 * print_chessboard - function that print the chessboard
 * @a: array of pieces
 * Return: non return
 */
void print_chessboard(char (*a)[8])
{
	int b, c;

	for (b = 0; b < 8; b++)
	{
		for (c = 0; c < 8; c++)
		{
			_putchar(a[b][c]);
		}

		_putchar('\n');
	}
}
