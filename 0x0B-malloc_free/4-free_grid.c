#include <stdio.h>

#include <stdlib.h>

#include "main.h"

/**
 * free_grid - freeying 2d array
 * @grid: 2d grid
 * @height: height dimension of grid
 * Return: 0
 */

void free_grid(int **grid, int height)

{

int lindo;
for (lindo = 0; lindo < height; lindo++)
{
free(grid[lindo]);
}
free(grid);
}
