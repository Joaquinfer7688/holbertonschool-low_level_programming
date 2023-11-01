#include <stdio.h>
#include <stdlib.h>
/**
 *create_array - creates an array of chars
 *@size: size of the array
 *@c: chat to be initialized
 *Return: pointer to the array or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	p = (char *) malloc(sizeof(char) * size);

	if (p == NULL)
		return (0);

	while (i < size)
	{
		*(p + i) = c;
		i++;
	}

	*(p + i) = '\0';

	return (p);
}
