#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - a function that initializes a variable of type struct dog
 * struct dog - struct to be initialized
 * @d: pointer
 * @name: element name
 * @age: age element
 * @owner: owner element
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
