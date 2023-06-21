#include <stdio.h>
/**
 *Prints the sum of even-valued Fibonaccnot exceeding 4000000.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long fserie1 = 0, fserie2 = 1, fsum;
	float Tsum;

	while (1)
	{
		fsum = fserie1 + fserie2;
		if (fsum > 4000000)
			break;

		if ((fsum % 2) == 0)
			Tsum += fsum;

		fserie1 = fserie2;
		fserie2 = fsum;
	}
	printf("%.0f\n", Tsum);

	return (0);
}

