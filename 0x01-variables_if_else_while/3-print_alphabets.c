#include <stdio.h>
/**
 *main - print the last digit of the number stored in the variable n.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	
	char low;

	for (low = 'a'; low <= 'z'; low++)
	putchar(low);
	
	for (low = 'A'; low <= 'Z'; low++)
	putchar(low);
	putchar('\n');

	return (0);
}
