#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*free_grid- free a previous grid
*
*@grid: The pointer to the 2d grid to free
*@height: Numbers of row in the grid
*
*/

void free_grid(int **grid, int height)
{
int i = 0;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
