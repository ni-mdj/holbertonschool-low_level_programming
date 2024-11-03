#include <stdio.h>
#include "main.h"

/**
 * print_array - function that prints n elements
 * @a: the array of integers
 * @n : the numbers of elements to be printed
 */

void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i < n - 1)
{
printf(", ");
}
}
printf("\n");
}
