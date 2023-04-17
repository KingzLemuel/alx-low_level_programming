#include "dog.h"

/**
 * init_dog - A struct function of three members
 * @name:name of dog
 * @age: age of dog
 * @owner: owner of dog
 * @d: pointer to dog's owner
 * Return: struct dog
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
