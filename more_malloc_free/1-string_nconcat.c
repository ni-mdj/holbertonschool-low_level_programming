#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 * @n: Number of bytes from s2 to concatenate
 *
 * Return: Pointer to newly allocated space in memory, or NULL if it fails
 **/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *pizza;
int len1;
int len2;
int i;
int j;

len 1 = 0;
len 2 = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
len1 = strlen(s1);
len2 = strlen(s2);
if (n >= len2)
n = len2;
pizza = malloc(sizeof(char) * (len1 + n + 1));
if (pizza == NULL)
return (NULL);
for (i = 0; i < len1; i++)
pizza[i] = s1[i];
for (j = 0; j < n; j++, i++)
pizza[i] = s2[j];
pizza[i] = '\0';
return (pizza);
}

