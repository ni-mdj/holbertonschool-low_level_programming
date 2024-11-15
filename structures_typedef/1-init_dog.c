#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointers go to the structures dog and initialised
 * @name: dog name
 * @age: dog age
 * @owner: propriet name dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}

