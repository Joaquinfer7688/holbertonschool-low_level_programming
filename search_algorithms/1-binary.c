#include "search_algos.h"

/**
* binary_search - function that searches for a value in a sorted array
*@array: pointer to first element array
*@size: number of elements in array
*@value: value to search
*Return: mid or -1
*/

int binary_search(int *array, size_t size, int value)
{
	size_t mid, left = 0, right = size - 1, i;

	if (array == NULL)
			return (-1);

	while (left <= right)
	{
		printf("searching in array: ");

		for (i = left; i <= right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		mid = left + (right - left) / 2;

		if (array[mid] == value)
			return (mid);

		if (array[mid] > value)
		right = mid - 1;

		else
		left = mid + 1;
	}

	return (-1);
}
