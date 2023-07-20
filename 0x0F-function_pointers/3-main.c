#include "3-calc.h"

/**
 * main - Entry point
 * @arcd: Parameter (How many)
 * @argv: The parameter in the case the number to be calculated.
 * Description : This progaram is the entry point for a calculator
 (* Section header: 3-calc.h)*
  * Return: 0 in success
  */
int main(int argc, char *argv[])
{
	int n1, n2, result;
	int (*p)(int, int);

	if (argc < 4 || argc > 4)
	{
		printf("Error\n");
		exit(98);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);

	p = get_op_func(argv[2]);

	if (p == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = p(n1, n2);

	printf("%d\n", result);
	return (0);
}

