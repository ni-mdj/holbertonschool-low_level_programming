#include <stdio.h>
#include "dog.h"

/**
 * print_dog - write a function that prints a struct dog
 * @d: pointers to the struct dog
 *
 * Description : If an element of d is NULL, print (nil) instead of this element
 */
void print_dog(struct dog *d)
{
if (d == NULL)
return;

if (d ->name == NULL)
printf("name: (nil)\n");

else 
printf("name: %s\n", d->name);

printf("age: %f\n" , d->age);

if (d->owner == NULL)

printf("owner: (nil)\n");

else

printf("owner: %s\n" , d->owner);
}

