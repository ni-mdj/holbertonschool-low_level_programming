#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * @dest: the destination string
 * @src: the source string to be appended
 *
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{

int dest_i = 0;
int i = 0;

while (dest[dest_i] != '\0')
{
dest_i++;
}
while (src[i] != '\0')
{
dest[dest_i + i] = src[i];
i++;
}
dest[dest_i + i] = '\0';
return (dest);
}
