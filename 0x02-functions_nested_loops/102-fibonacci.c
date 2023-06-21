#include <stdio.h>
/**
 *Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *
 *
 * Return: Always 0.
 */
int main(void)
{
	int c;
	unsigned long fserie1 = 0, fserie2 = 1, sum;

	for (c = 0; c < 50; c++)
	{
		sum = fserie1 + fserie2;
		printf("%lu", sum);

		fserie1 = fserie2;
		fserie2 = sum;

		if (c == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
