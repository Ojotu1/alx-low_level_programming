 #include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Program to print prints each array elem on a new line
 * @array: The array
 * @size: Sixe of the elements to print
 * @action: The pointer to print in regular or hex
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;
	if (array == NULL || action == NULL)
		return;
	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}

