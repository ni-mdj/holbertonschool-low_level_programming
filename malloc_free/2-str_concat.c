#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @
 * @str: the string to duplicate.
 *
 * Return: pointer to the duplicated string on success,
 *         NULL if str is NULL or if memory allocation fails.
 */

 char *str_concat(char *s1, char *s2)
{
char *s;
unsigned int len1 = 0, len2 = 0, pizza, pasta;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while(s1[len1])
len1++;
while(s2[len2])
len2++;
s = (char *)malloc(sizeof(char) * len1 + len2 + 1);
if(s == NULL)
return (NULL);
for(pizza = 0; pizza < len1; pizza++)
s[pizza] = s1[pizza];
for(pasta = 0; pasta < len2; pasta++, pizza++)
s[pizza] = s2[pasta];
s[pizza] = '\0';
return (s);
}
