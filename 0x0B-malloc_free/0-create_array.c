#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * Create Array
 * @buffer: That is the address of memory that will be printed
 * @size: Taht is the sixe of the memory that will be printed
 * Return: s
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s = (char*)malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
	 	s[i] = c;

	 return (s);
}

