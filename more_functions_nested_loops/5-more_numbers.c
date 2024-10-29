#include "main.h"

/**
 *  more_numbers - unction that prints 10 times the numbers
 *
 * Return: putchar
 */

void more_numbers(void)
{
int i;
int j;

for (i = 0; i < 10; i++)
{
for (j = 0; j <= 14; j++)
{
if (i < 9)
_putchar((j / 10) + '0');
_putchar((j % 10) + '0');
}
_putchar('\n');
}
}
