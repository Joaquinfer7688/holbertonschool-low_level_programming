#include "function_pointers.h"
/**
 * array_iterator - function that execute a function
 *@array: array to go
 *@size: size the array
 *@action: pointer to the function
 */
void array_iterator(int *array, size_t size, void (*action) (int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
