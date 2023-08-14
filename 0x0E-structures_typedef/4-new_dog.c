#include "dog.h"
#include <stdlib.h>
char *_strcpy(char *dest, char *src);
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: a struct dog
 * return NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;
	int n = 0, o = 0;

	doggy = malloc(sizeof(dog_t));
	if (!doggy)
		return (0);

	while (!name[n])
	{
		n++;
	}
	while (!owner[o])
	{
		o++;
	}
	doggy->name = malloc(sizeof(char) * (n + 1));
	if (!(doggy->name))
	{
		free(doggy);
		return (0);
	}
	doggy->owner = malloc(sizeof(char) * (o + 1));
	if (!(doggy->owner))
	{
		free(doggy);
		free(doggy->name);
		return (0);
	}
	_strcpy(doggy->name, name);
	_strcpy(doggy->owner, owner);
	doggy->age = age;

	return (doggy);

}

/**
 * _strcpy - copies the string pointed to another string
 * @dest: the string to write
 * @src: the string to copie
 * Return: the string copied
 */
char *_strcpy(char *dest, char *src)
{
	int i, l;

	l = 0;
	while (src[l] != '\0')
	{
		l++;
	}
	for (i = 0; i < l; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
