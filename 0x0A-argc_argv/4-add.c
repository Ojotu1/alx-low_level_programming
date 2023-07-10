#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * main - takes integer arguments to find the sum
 * @argv: name of Array
 * @argc: No. of arguments given in the command line
 * Returen: if non integer 1, else 0
 */
int main(int argc, char *argv[])
{
	int x, y, len, total;
	char *ptr;

	if (argc < 2)
		printf("0\n");
	else
	{
		total = 0;
		for (x = 1; x < argc; x++)
		{
			ptr = argv[x];
			len = strlen(ptr);

			for (y = 0; y < len; y++)
			{
				if (isdigit(*(ptr + y)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
			total += atoi(argv[x]);
		}
	printf("%d\n", total);
	}
	return (0);
}

