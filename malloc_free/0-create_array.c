#include "main.h"
#include <stdlib.h>

/**
 * create_array - Function that creates a character matrix, initializes it
 * with a specific character
 * @size: size of the array
 * @c: the character for initializing the array
 * Return: pointer to the array or NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int scroll = 0;
	char *ar = malloc(sizeof(char) * size);

	if (ar == NULL)
		return (NULL);
	if (size == 0)
		return (NULL);
	for (; scroll <= size; scroll++)
		ar[scroll] = c;
	return (ar);
}
