#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat: for concatenating strings
 * @s1:first input
 * @s2: second input
 * Rrtun : concatenation of s1 and s2
*/

char *str_concat(char *s1, char *s2)
{
	int a, b, c;
	char *abstr = NULL;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	for (a = 0; s1[a] != '\0'; a++)
		;

	for (b = 0; s2[b] != '\0'; b++)
		;

	abstr = (char*)malloc((a + b) * sizeof(char));

	if (abstr == NULL)
	return (NULL);

	for (c = 0; s1[c] != '\0'; c++)
		abstr[c] = s1[c];

	for (c = 0; s2[c] != '\0'; c++)
		abstr[c + a] = s2[c];

	return (abstr);
}

