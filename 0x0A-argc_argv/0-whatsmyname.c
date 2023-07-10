#include <stdio.h>
#include "main.h"
/**
* main - to print the name of the program
* @argc:means  number of arguments
* @argv: is for array of argument
* Return:0 for succes
*/
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}

