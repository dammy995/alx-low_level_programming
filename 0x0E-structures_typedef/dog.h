#ifndef DOG_H

#define DOG_H

#include <stdio.h>

#include <stdlib.h>

/**
 * struct dog - a new type of data
 * representing a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner's name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};


/**
 * dog_t - Typedef for struct dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
