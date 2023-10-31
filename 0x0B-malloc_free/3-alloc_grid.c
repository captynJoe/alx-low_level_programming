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
int i, j, k, l;
int **mee;

if (width <= 0 || height <= 0)
return (NULL);

mee = malloc(sizeof(int *) * height);

if (mee == NULL)
{
free (mee);
return (NULL);
}

for (i = 0; i < height; i++)
{
mee[i] = malloc(sizeof(int) * width);

if (mee[i] == NULL)

{

for (j = i; j >= 0; j--)
{

free(mee[j]);
}

free(mee);
return (NULL);
}
}

for (k = 0; k < height; k++)
{
for (l = 0; l < width; l++)
{
mee[k] [l] = 0;
}
}

return (mee);
}
