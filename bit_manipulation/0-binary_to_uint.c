#include "main.h"
/**
 *binary_to_uint - function convert binary number to unsigned int
 *@b: pointer
 *Return: NULL or decimal
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b == '\0' || *b == '1')
		{
			decimal = (decimal << 1) | (*b - '0');
			b++;
		}
		else
		{
			return (0);
		}
	}

		return (decimal);
}
