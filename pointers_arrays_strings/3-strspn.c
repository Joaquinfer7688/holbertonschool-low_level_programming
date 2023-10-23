#include "main.h"
/**
 * _strspn - function that hets lenght of a prefix substring
 *@s: source string
 *@accept: accepted string
 *Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0, b, c = 0;

	while (accept[a])
	{

		b = 0;

		while (s[b] != 32)
		{
			if (accept[a] == s[b])
			{
				c++;
			}

			b++;
		}

		a++;
	}
}
