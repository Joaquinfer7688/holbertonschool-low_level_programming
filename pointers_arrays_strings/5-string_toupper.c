#include "main.h"
/**
 * string_toupper - changes all lowercase letters to uppercase
 *@j: the string will be modified
 * Return: char var
 */
char *string_toupper(char *j)
{
	int a = 0;

	while (j[a])
	{
		if (j[a] >= 97 && j[a] <= 122)
		{
			j[a] -= 32;
		}
			a++;
	}
			return (j);

}
