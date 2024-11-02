#include "main.h"
#include <stdio.h>

/**
 * puts_half -  prints half of a string
 * @str: prints half of a string
 */

void puts_half(char *str)
{
int i = 0;
int j;

while (str[i] != '\0')
{
i++;
}

j = (i % 2 == 0) ? i / 2 : (i
while (str[j] != '\0')
{
_putchar(str[j]);
j++;
}

_putchar('\n');
}
