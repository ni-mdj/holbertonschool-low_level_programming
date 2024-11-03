#include "main.h"
#include <stdio.h>

/**
 * _strncat - Concatenates two strings up to n bytes
 * @dest: The destination string
 * @src: The source string
 * @n: Maximum number of bytes to use from src
 *
 * Return: A pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{

int dest_i = 0;
int i = 0;

while (dest[dest_i] != '\0')
{
dest_i++;
}
while (i < n && src[i] != '\0')
{
dest[dest_i + i] = src[i];
i++;
}
if (i < n)
{
dest[dest_i + i] = '\0';
}

return (dest);
}
