#include "main.h"
/**
 *binary_to_uint - function convert binary number to unsigned int
 *@b: pointer
 *Return: 0 or decimal
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b == '1')

			decimal = (decimal << 1) | 1;

		else if (*b == '0')

			decimal <<= 1;
		else
			return (0);
		b++;
	}

		return (decimal);
}
