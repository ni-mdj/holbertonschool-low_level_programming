#include <stdio.h>
#include "function_pointers.h"

/**
* int_index - Searches for an integer in an array
* @array: Pointer to the integer array
* @size: Number of elements in the array
* @cmp: Pointer to the comparison function
*
* Return: Index of the first matching element, or -1 if no match or invalid
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array && cmp && size > 0)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
}

return (-1);
}
