#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints each member of the struct dog
 * @d: pointer to the struct dog
 * Return: void
 * if an ele;ent of d is NULL, prints (nil) instead of this element
 * eg, if name is NULL then prints Name: (nil)
 * if d is NULL print nothing
 */
void print_dog(struct dog *d)
{
	if (!d)
		return;
	if (!(d->name))
		d->name = "(nil)";
	if (!(d->owner))
		d->owner = "(nil)";
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
