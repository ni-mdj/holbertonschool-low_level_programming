#include <stdlib.h>
#include <string.h>
#include "main.h"

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *result;
unsigned int len1, len2, i, j;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

for (len1 = 0; s1[len1]; len1++)
;
for (len2 = 0; s2[len2]; len2++)
;
if (n >= len2)
n = len2;

result = malloc(sizeof(char) * (len1 + n + 1));
if (result == NULL)
return (NULL);

for (i = 0; i < len1; i++)
result[i] = s1[i];

for (j = 0; j < n; j++, i++)
result[i] = s2[j];

result[i] = '\0';

return (result);
}

