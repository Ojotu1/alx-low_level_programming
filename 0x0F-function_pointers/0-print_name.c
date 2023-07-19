#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name- Program to print name using pointer to function
 * @name: String that will be added
 * @f: That is the pointer to the function
 * Return: Void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

