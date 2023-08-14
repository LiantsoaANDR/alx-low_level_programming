#ifndef _DOG_
#define _DOG_

/**
 * struct dog - struct that contains its name, age, his owner
 * @name: pointer to the name of the dog
 * @age: age of the dog as a float
 * @owner: pointer to theowner of the dog
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
