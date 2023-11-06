#ifndef DOG_H
#define DOG_H
/**
 *struct dog - name dog
 *@name: name the dog
 *@age: age the dog
 *@owner: owner the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
