#include "main.h"
#include <stdio.h>

/**
 * rev_string - that reverses a string
 * @s: function that reverses a string
 */

void rev_string(char *s)
{
int i = 0;
int j;
char t;

while (s[i] != '\0')
{
i++;
}
for (j = 0; j < i / 2; j++)
{
t = s[j];
s[j] = s[i - 1 - j];
s[i - 1 - j] = t;
}
}
