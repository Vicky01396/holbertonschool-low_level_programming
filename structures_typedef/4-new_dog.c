#include "dog.h"

/**
 * _strcpy - function that copies the string pointed to by src,
 * to the buffer pointed to by dest.
 * @dest: destination of the copy
 * @src: pointer to the string
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *met = dest;

	while ((*met++ = *src++) != '\0')
	{
		;
	}
	return (dest);
}

/**
 * new_dog - function that creates a new dog.
 * @name: the name
 * @age: the age
 * @owner: the owner
 * Return: NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *save;

	save = malloc(sizeof(dog_t));
	if (!save)
	{
		free(save);
		return (NULL);
	}

	save->name = malloc(sizeof(char) * sizeof(name));
	save->owner = malloc(sizeof(char) * sizeof(owner));
	if (!save->name || !save->owner)
	{
		free(save->name);
		free(save->owner);
		free(save);
		return (NULL);
	}
	save->name = _strcpy(save->name, name);
	save->age = age;
	save->owner = _strcpy(save->owner, owner);
	return (save);
}
