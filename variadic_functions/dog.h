#ifndef DOG_H
#define DOG_H
#include <stdio.h>
/**
 * struct dog - the struct of a dog
 * @name: the name
 * @age: the age
 * @owner: owner
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
