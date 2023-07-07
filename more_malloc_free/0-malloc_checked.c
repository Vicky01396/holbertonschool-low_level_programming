#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Function that allocates memory using malloc.
 * @b: amount of memory
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *m;
	char val = 98;

	m = malloc(b);
	if (m == NULL)
	{
		exit(val);
	}
	return (m);
}
