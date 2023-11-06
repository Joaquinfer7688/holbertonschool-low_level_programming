#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
/**
 *init_dog - initializes a dos structure
 *@d: structure dog
 *@name: name the dog
 *@age: age the dog
 *@owner: owner the dog
 *Return: 0
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
