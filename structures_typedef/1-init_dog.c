#include <stdio.h>
#include "dog.h"
/**
 *init_dog - function that initialize a variable
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
