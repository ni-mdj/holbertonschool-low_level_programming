#include <stddef.h>

/**
* array_iterator - function that executes a function given as a parameter
* @array: Pointer to the integer array
* @size: Size of the array
* @action: Function pointer to the action to be performed on each element
*
* Description: This function applies the given action function to each
* element of the array.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (array && action)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
