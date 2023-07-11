#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char *_strdup(char *str)
{
	int x = 0, y, z = 0;
	char *abstr = NULL;

	while (str[z] != '\0')
	{
		x++;
		z++;
	}
	abstr = malloc(sizeof(char) * (x + 1));

	if (str == NULL)
		return (NULL);
	for (y = 0; y <= x; y++)
		abstr[y] = str[y];

	return (abstr);
}

