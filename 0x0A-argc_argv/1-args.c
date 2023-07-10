#include <stdio.h>
#include "main.h"
/**
* main - function prints the number of arguments passed to the program
* @argc: is the  number of the arguments
* @argv: is the array of the arguments
* Return: 0 for every (Success)
*/

int main(int argc, char *argv[])
{
(void) argv; /* Means to ignore the argv*/
printf("%d\n", argc - 1);
return (0);
}

