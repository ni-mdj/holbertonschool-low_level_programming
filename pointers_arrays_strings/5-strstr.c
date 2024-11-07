#include <stdio.h>

/**
 * _strstr - Locate a substring within a string
 * @haystack: The string to search
 * @needle: The substring to search in
 *
 * Return: A pointer to the beginning of the located substring,
 *         or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
if (*needle == '\0')
return (haystack);

while (*haystack != '\0')
{
char *i = haystack;
char *j = needle;

while (*i == *j && *j != '\0')
{
i++;
j++;
}

if (*j == '\0')
return (haystack);

haystack++;
}

return (NULL);
}
