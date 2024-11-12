#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars
 * @c: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: NULL
 */

char *create_array(unsigned int size, char c)
{
char *i;
unsigned int j;

if (size == 0)
{
return (0);
}
i = malloc(size * sizeof(char));
if (i == 0)
{
return (0);
}
for (j = 0; j < size; j++)
{
i[j] = c;
}
return (i);
}
