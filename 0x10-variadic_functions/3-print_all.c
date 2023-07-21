#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * Print_all - Program to print all characters
 * @format: It list the types of arguments passed to the function
 * Return: 0 (Success)
 */

void print_all(const char *const format, ...)
{
	int e = 0;
	char * st, *sp = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[e])
		{
			switch (format[e])
			{
				case 'c':
					printf("%s%c", sp, va_arg(list,int));
					break;
				case 'i':
					printf("%s%d", sp, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sp, va_arg(list, double));
					break;
				case 's':
					st = va_arg(list, char *);
					if (!st)
						st = "(nil)";
					printf("%s%s", sp, st);
					break;
				default:
					e++;
					continue;
			}
			sp = ", ";
			e++;
		}
	}

	printf("\n");
	va_end(list);
}

