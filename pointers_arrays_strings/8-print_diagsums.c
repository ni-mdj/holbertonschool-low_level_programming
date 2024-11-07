#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals
 *                  of a square matrix of integers
 * @a: Pointer to the first element of the matrix
 * @size: Size of the matrix (number of rows/columns)
 *
 * Description: This function calculates and prints the sum of the main
 * diagonal (top-left to bottom-right) and the secondary diagonal
 * (top-right to bottom-left) of a square matrix.
 */
void print_diagsums(int *a, int size)
{
int i, j = 0, k = 0;

for (i = 0; i < size; i++)
{
j += a[i * size + i];
k += a[i * size + (size - 1 - i)];
}

printf("%d, %d\n", j, k);
}
