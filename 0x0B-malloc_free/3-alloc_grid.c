#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
int **moi;
int a, b;
if (width <= 0 || height <= 0)
return (NULL);
moi = malloc(sizeof(int *) * height);
if (moi == NULL)
return (NULL);
for (a = 0; a < height; a++)
{
moi[a] = malloc(sizeof(int) * width);
if (moi[a] == NULL)
{
for (; a >= 0; a--)
free(moi[a]);
free(moi);
return (NULL);
}
}
for (a = 0; a < height; a++)
{
for (b = 0; b < width; b++)
moi[a][b] = 0;
}
return (moi);
}
