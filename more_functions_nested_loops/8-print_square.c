#include "main.h"

/**
 * print_square - function that prints a square, followed by a new line
 * @size : riba
 *
 * Return: return 0
 */

void print_square(int size)
{
int i;
int j;

if (size <= 0)
{
_putchar('\n');
}
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
_putchar('hastag');
}
_putchar('\n');
}
}
