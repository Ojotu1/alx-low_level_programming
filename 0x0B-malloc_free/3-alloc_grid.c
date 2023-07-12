#include "main.h"
#include <stdlib.h>
/**
* alloc_grid - loops in nest to make grid
* @width: width of the input
* @height: height of th input
* Return: pointer to 2 dim. array
*/
int **alloc_grid(int width, int height)
{
	int **his;
	int a, b;
	if (width <= 0 || height <= 0)
		return (NULL);
	his = malloc(sizeof(int *) * height);
	
	if (his == NULL)
	return (NULL);
	
	for (a = 0; a < height; a++)
	{
		his[a] = malloc(sizeof(int) * width);
		if (his[a] == NULL)
		{
			for (; a >= 0; a--)
			free(his[a]);
			free(his);
		return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
		his[a][b] = 0;
	}
	return (his);
}

