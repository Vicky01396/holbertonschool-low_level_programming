#include "dog.h"
/**
 * free_dog - function that frees dogs.
 * @d: the struct to be released
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
