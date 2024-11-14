#include <stdlib.h>
#include "main.h"

/**
 * str_concat - function that concatenates two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: pointer to the concatenated string on success,
 *         NULL if memory allocation fails.
 */
char *str_concat(char *s1, char *s2)
{
char *s;
int len1;
int len2;
int pizza;
int pasta;

len1 = 0;
len2 = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while(s1[len1])
len1++;
while(s2[len2])
len2++;
s = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
if(s == NULL)
return (NULL);
for (pizza = 0; pizza < len1; pizza++)
s[pizza] = s1[pizza];
for (pasta = 0; pasta < len2; pasta++, pizza++)
s[pizza] = s2[pasta];
s[pizza] = '\0';
return (s);
}
