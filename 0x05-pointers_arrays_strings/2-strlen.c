#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: char input
 * Return: length of the input string
 *
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s !='\0')
	{
		longi++;
		s++;
	}
	return (longi);
}

