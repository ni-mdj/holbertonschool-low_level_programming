#include <stdio.h>
#include "main.h"

/**
 * *_strchr - Locates a character in a string
 * @s: Pointer to the string
 * @c: The character to locate
 *
 * Return: a pointer to the first occurrence of the character c in the strings
 */

char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (s);
s++;
}
if (*s == c)
return (s);

return (NULL);
}
