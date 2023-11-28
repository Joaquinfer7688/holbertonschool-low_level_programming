#include "main.h"
/**
 *print_binary - function print binary representation of number
 *@n: number printed
 *
 */
void print_binary(unsigned long int n)
{
	int temp;
	static int cont;

	if (n == 0 && cont > 0)
		return;
	else if (n == 0)
	{
		_putchar('0');
		return;
	}
	temp = (n & 1);
	cont++;
	print_binary(n >>= 1);
	_putchar('0' + temp);
}
