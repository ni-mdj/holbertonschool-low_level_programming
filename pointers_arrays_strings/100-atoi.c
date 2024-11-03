#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the integer value of the converted str
 */

int _atoi(char *s)	
int i = 1;
unsigned int k = 0;
int j = 0;

while (*s)
{
if (*s == '-')
i *= -1;
else if (*s >= '0' && *s <= '9')
{
j = 1;
k = k * 10 + (*s - '0');
}
else if (j)
{
break;
s++;
}

return (i);
}
