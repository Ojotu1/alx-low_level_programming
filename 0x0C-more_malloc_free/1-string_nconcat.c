#include "main.h"

/**
 * *string_nconcat - joins n bytes of string to another string
 * @s1: String to be append to
 * @s2: Stringe to be joined or concatenated from
 * @n: Numnber of bytes from s2 to concatenate to s1
 * Return:Pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int length = n, a;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a]; a++)
		length++;
	
	s = malloc(sizeof(char) * (length + 1));

	if (s == NULL)
		return (NULL);
		
	length = 0;

	for (a = 0; s1[a]; a++)
		s[length++] = s1[a];

	for (a = 0; s2[a] && a < n; a++)
		s[length++] = s2[a];

	s[length] = '\0';

	return (s);
}

