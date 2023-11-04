#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *array_range - function that creates an array
 *@min: min value in array
 *@max: max value in array
 *Return: a pointer
 */
int *array_range(int min, int max)
{
	int *j, i = 0;

	if (min > max)
		return (NULL);
	j = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (j == NULL)
		return (NULL);

	while (min <= max)
	{
		j[i] = min;
		i++;
		min++;
	}

	return (j);
}
