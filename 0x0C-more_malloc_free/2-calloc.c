#include "main.h"

/**
 * _calloc- To initialize memory with 0 and allocate it using malloc
 * @nmemb: number of elements present
 * @size: Tells the size of the memory block to be allocated
 * Return: points to the memory address block
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *unit;
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);
	unit = malloc(nmemb * size);
	if (unit != NULL)
	{
		for (a = 0; a < (nmemb * size); a++)
			unit[a] = 0;
		return (unit);
	}
	else
		return (NULL);
}

