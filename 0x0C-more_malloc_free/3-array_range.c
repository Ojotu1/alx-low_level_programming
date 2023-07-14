#include "main.h"

/**
 * array_range - makes integer array
 * @min: smallest value in the array
 * @max: biggest number in the array
 * Return: pointer to the memory block address
 */
int *array_range(int min, int max)
{
	int *unit;
	int a, b = 0;

	if (min > max)
		return (NULL);
	unit = malloc(sizeof(*unit) * ((max - min) + 1));
	if (unit != NULL)
	{
		for (a = min; a <= max; a++)
		{
			unit[b] = a;
			b++;
		}
		return (unit);
	}
	else
		return (NULL);
}

