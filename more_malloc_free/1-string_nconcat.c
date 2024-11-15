#include <stdlib.h>
#include <string.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *pizza;
unsigned int len1, len2, i, j;

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
return NULL;

for (i = 0; i < len1; i++)
pizza[i] = s1[i];

for (j = 0; j < n; j++, i++)
pizza[i] = s2[j];

pizza[i] = '\0';

return (pizza);
}
