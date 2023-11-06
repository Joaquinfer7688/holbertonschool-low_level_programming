#include <stdlib.h>
#include "dog.h"
/**
 *init_dog - initializes a variable of type struct dog
 *@d: pointer to an element of type dog
 *@name: name the dog
 *@age: age the dog
 *@owner: owner the dog
 *Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;

}
