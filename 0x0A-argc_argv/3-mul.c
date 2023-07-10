#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* _atoi - ir converts a string value to an integer value
* @s: string to be converted i.e the one that will be changed
* Return: the int converted from the @s string
* */
int main(int argc, char *argv[])
{
	int num1, num2;
	
	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num2 = 1;

		for (num1 = 1; num1 < 3; num1++)
			num2 *= atoi(argv[num1]);

		printf("%d\n", num2);
	}

	return (0);
}

