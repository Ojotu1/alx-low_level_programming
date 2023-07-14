#include "main.h"

/**
 * malloc_checked - allocation of memory using malloc
 * @b: b represents numnber of bytes to be allocated
 * Return: A pointer will be returned to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void*ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}

