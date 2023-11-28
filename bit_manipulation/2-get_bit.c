#include "main.h"
/**
 *get_bit - function return value of a bit at given index
 *@n: bit
 *@index: value
 *Return: 1 or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
