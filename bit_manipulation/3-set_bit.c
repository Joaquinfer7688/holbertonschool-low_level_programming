#include "main.h"
/**
 *set_bit - function that sets value of a bit to 1 at given index
 *@n: pointer to bit
 *@index: value
 *Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit_to_set = 1;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	bit_to_set <<= index;

	*n = *n | bit_to_set;
	return (1);
}
