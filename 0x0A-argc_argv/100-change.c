#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* main - is a program to print the minimum number of coins to
* make change for an amount of money
* @argc: tells how many arguments
* @argv: collection of arguments
* Return: 0 on Success, 1 on Error
*/
int main(int argc, char *argv[])
{
	int n, y, outcome;
	int coin[] = {25, 10, 5, 2, 1};
	
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	outcome = 0;
	if (n < 0)
	{
		printf("0\n");
		return (0);
	}
	for (y = 0; y < 5 && n >= 0; y++)
	{
	while (n >= coin[y])
	{
		outcome++;
		n -= coin[y];
	}
	}
		printf("%d\n", outcome);
	return (0);
}

