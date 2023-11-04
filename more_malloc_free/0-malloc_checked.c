#include <stdlib.h>
#include <stdio.h>
/**
 *malloc_checked - allocates memory
 *@b: number
 *Return: 0
 */
void *malloc_checked(unsigned int b)
{
	void *j;

	j = malloc(b);
	if (j == NULL)
		exit(98);

	return (j);
}
