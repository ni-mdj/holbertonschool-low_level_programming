#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 * @str: the string to duplicate.
 *
 * Return: pointer to the duplicated string on success, 
 *         NULL if str is NULL or if memory allocation fails.
 */

char *_strdup(char *str)
{
char *i;
int j, k;

if (str == NULL)
{
return (NULL);
}

for (k = 0; str[k] != '\0'; k++)
i = (char *)malloc(sizeof(char) * (k + 1));

if (i == NULL)
{
return (NULL);
}

for (j = 0; j < k; j++)
{
i[j] = str[j];
}

i[j] = '\0';

return (i);
}
