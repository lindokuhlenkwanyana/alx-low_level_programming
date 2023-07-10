#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - the nested loop to make grid
 * @width: the width input
 * @height: the height input
 * Return: 2 dim. array
 */
int **alloc_grid(int width, int height)
{
int **lindo;
int x, y;
if (width <= 0 || height <= 0)
return (NULL);
lindo = malloc(sizeof(int *) * height);
if (lindo == NULL)
return (NULL);
for (x = 0; x < height; x++)
{
lindo[x] = malloc(sizeof(int) * width);
if (lindo[x] == NULL)
{
for (; x >= 0; x--)
free(lindo[x]);
free(lindo);
return (NULL);
}
}
for (x = 0; x < height; x++)
{
for (y = 0; y < width; y++)
lindo[x][y] = 0;
}
return (lindo);
}
