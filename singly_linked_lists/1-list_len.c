#include "lists.h"
#include <stdio.h>

/**
* list_len - unction that returns the number of elements in a linked list_t
* @h: pointer to the head of the list
*
* Return: return i
**/

size_t list_len(const list_t *h)
{
size_t i = 0;
while (h != NULL)
{
i++;
h = h->next;
}
return (i);
}
