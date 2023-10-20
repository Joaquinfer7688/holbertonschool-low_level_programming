#include "main.h"
/**
 * _strncpy - function that copies a string
 *@dest:buffer storing the string copy
 *@src:the source string
 *@n: maximuum number to be copied from src
 * Return: pinter to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
