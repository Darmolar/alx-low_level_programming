#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - an iterator function
 * @array: an pointer array
 * @size: an integer variable
 * @action: a pointer function
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
