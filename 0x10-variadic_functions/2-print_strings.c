#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 * Description: if separator is NULL, it is not printed and if one of the strings is NULL, (NIL) is printed insted.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *st;
	unsigned int begin;

	va_start(strings, n);

	for (begin = 0; begin < n; begin++)
	{
		st = va_arg(strings, char*);

		if (st == NULL)
			printf("(nil)");
		else
			printf("%s", st);

		if (begin != (n-1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}

