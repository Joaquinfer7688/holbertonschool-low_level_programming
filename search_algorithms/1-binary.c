#include "search_algos.h"

/**
* binary_search - function that searches for a value in a sorted array
*@array: pointer to first element array
*@size: number of elements in array
@value: value to search
*/

int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;
	size_t i;
	int mid = left + (right - left) / 2;

	if (array == NULL || size == 0)
	{
	return (-1);
	}

	while (left <= right)
	{
		printf("searching in array: ");

		for (i = left; i <= right; i++)
			printf("%d ", array[i]);
		printf("\n");

		if (array[mid] == value)
		{
			return (mid);
		}

	else if (array[mid] > value)
	{
		left = mid + 1;
	}
		else
		{
		right = mid - 1;
		}

	}
	return (-1);
}
