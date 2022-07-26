#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width : rows
 * @height : colums
 * Return: two dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i;

	ptr = malloc(height * sizeof(int *));
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(width * sizeof(int));
	}
	return (ptr);
}
