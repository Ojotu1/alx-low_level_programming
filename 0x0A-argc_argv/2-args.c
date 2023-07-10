#include <stdio.h>
#include "main.h"
/**
* main - prints every argument it receives
* @argc: i.e how many arguments
* @argv: collection (array) of arguments
* Return: 0 on Success
*/
int main(int argc, char *argv[])
{
	int e;
	for (e = 0; e < argc; e++)
	{
	printf("%s\n", argv[e]);
	}
	return (0);
}

