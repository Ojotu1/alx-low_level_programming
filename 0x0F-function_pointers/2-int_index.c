#include "function_pointers.h"
/**
 * int_index - Program to return index place if comparison equal ture, else -1
 * @array: The array
 * @size: size of elem in the array
 * @cmp: pointer to func of one of the 3 in main
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int e;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (e = 0; e < size; e++)
	{
		if (cmp(array[e]))
			return (e);
	}
	return (-1);
}

