#include <stdio.h>
#include <stdlib.h>


/**
 * str_concat - function that concatenates two strings
 * @width: width of the 2d array
 * @height: height of the 2d array
 *
 * Return: Pointer to a 2D array of integers, or NULL on failure
 */

int **alloc_grid(int width, int height)
{ 
int **grid;
int pizza;
int pasta;
if (width <= 0 || height <= 0)
return (NULL);
grid = malloc(sizeof(int *) * height);
if (grid == NULL)
return (NULL);
for (pizza = 0; pizza < height; pizza++)
grid[pizza] = malloc(sizeof(int *) * width);
if (grid[pizza] == NULL)
for (pasta = 0; pasta < pizza; pasta++)
free(grid[pasta]);
free(grid);
return (NULL);
for (pasta = 0; pasta < width; pasta++)
grid[pizza][pasta] = 0;
return (grid);
}
