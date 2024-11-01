#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void print_rev(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
for (int j = i; i >= 0; j--)
{
_putchar(s[i]);
}
putchar('\n');
