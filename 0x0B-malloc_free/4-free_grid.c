#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid previously
 * created by your alloc_grid function
 * @grid : freed grid
 * @height : height
 * Return: Always 0
 */
void free_grid(int **grid, int height)
{
	int count;

	count = 0;
	if (height == 0 || grid == NULL)
		return;
	while (count < height)
	{
		free(grid[count]);
		count++;
	}
	free(grid);
}
