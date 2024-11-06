#include <stdio.h>

/**
 * _strspn - Gets the length of a prefix substring
 * @s: The string to be scanned
 * @accept: The string containing the characters to match
 *
 * Return: The number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int j = 0;
int i;
char *a;

while (*s)
{
i = 0;
for (a = accept; *a; a++)
{
if (*s == *a)
{
i = 1;
}
}
if (i)
{
j++;
s++;
}
else
{
return (j);
}
}

return (j);
}
