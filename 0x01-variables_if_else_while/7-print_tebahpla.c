#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Prints the lowercase alphabet in reverse.
 *
 * Return: Always 0.
 */
int main(void)
{
	int rl;

	for (rl= 'z'; rl >= 'a'; rl--)
	putchar(rl);
	putchar('\n');
	
	return (0);

}

