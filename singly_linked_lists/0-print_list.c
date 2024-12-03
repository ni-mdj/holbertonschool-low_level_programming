#include "lists.h"
#include <stdio.h>

/**
* print_list - prints all the elements of a list_t
* @h: pointer to the head of the list
*
* Return: the numberof nodes
*/

size_t print_list(const list_t *h)
{
size_t i = 0;

while (h)
{
if (h->str)
printf("[%u] %s\n", h->len, h->str);
else
printf("[0] (nil)\n");

i++;
h = h->next;
}
return (i);
}

