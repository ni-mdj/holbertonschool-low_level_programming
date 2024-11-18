#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array and initializes it to zero
 * @nmemb: Number of elements in the array
 * @size: Size of each element in bytes
 *
 * Return: Pointer to the allocated memory, or NULL if it fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
unsigned int pasta;
unsigned char *pizza;
unsigned int i;

if (nmemb == 0 || size == 0)
return (NULL);

pasta = nmemb * size;

if (pasta / nmemb != size)
return (NULL);

ptr = malloc(pasta);

if (ptr == NULL)
return (NULL);

pizza = (unsigned char *)ptr;
for (i = 0; i < pasta; i++)
pizza[i] = 0;

return (ptr);
}

