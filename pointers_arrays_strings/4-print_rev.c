#include "main.h"

/**
 * print_rev - check the code 
 * @s : function that prints a string
 *
 * Description : reverse
 */

void print_rev(char *s)
{
int i;
int j;

i = 0;

while (s[i] != '\0')
{
i++;
}
for (j = i; j >= 0; j--)
{
_putchar(s[j]);
}
}
