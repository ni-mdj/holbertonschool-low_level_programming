#include "main.h"
#include <stdio.h>

/**
 * _strncat - concat√ne ®ncaract√®res de src√† des
 * @dest: string destination
 * @src: string source
 * @n: le nombre maximum de caract√res 
 *
 * return: un pointeur vers la cha√ne resultante dest
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
