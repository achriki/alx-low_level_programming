#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - init new struct of dog type
 * @d: pointer to dog struct
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 **/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
