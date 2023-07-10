#include "dog.h"
/**
 * print_dog - function that prints a struct dog
 * @d: pointer of struct dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name)
		printf("name: %s\n", d->name);
	else
		printf("name: (nil)\n");
	if (d->age)
		printf("age: %f\n", d->age);
	else
		printf("age: (nil)\n");
	if (d->owner)
		printf("owner: %s\n", d->owner);
	else
		printf("owner: (nil)\n");
}
