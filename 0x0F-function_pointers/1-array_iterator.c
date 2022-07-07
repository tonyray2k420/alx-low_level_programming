#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes passed function indirectly on passed array
 * @array: array pointer
 * @size: length of the integer array
 * @action: callback function pointer
 *
 * Return: void (nothing)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
			action(*(array++));
	}
}
