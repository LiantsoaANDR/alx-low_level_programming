#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialize a variable of type struch dog
 * @d: pointer to the initialized dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: pointer to the owner of the dog (string)
 * Return: void
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
