#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - Write a program that prints all single digit numbers of base 10 starting from 0. Using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9';)
	putchar(n);
	putchar('\n');

	return (0);

}

