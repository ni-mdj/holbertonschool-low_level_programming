#include <stdio.h>

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be scanned.
 * @accept: The string containing the characters to match.
 *
 * Return: The number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int i;

while (*s)
{
int found = 0;
for (i = 0; accept[i] != '\0'; i++)
{
if (*s == accept[i])
{
found = 1;
break;
}
if (!found)
break;

count++;
s++;
}

return (count);
}
