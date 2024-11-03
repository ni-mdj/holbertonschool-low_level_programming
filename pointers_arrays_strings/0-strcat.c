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

int j = 0;
int i = 0;

while (dest[j] != '\0')
{
j++;
}
while (src[i] != '\0')
{
dest[j + i] = src[i];
i++;
}
dest[j + i] = '\0';
return (dest);
}
