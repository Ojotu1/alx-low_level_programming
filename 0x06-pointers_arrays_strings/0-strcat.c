#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @dest: copy to
 * @src: copy from
 * Return: two concat strings
 */
char *_strcat(char *dest, char *src)
{

	int i, n = 0;

	while (dest[n])
	{
		n++;
	}
	for (i = 0; src[i] != 0; i++)
	{
		dest[n] = src[i];
		n++;
	}
	dest[n] = '\0';
	return (dest);
}

