#include "main.h"
/**
 * _memset - function that fills memory with a constant byte.
 * @s: the pointer to the memory
 * @b: constant byte
 * @n: number of byte to be fills
 *
 *Return: a pointer to the memory area s
 */

void *_memset(void *s, int b, unsigned int n)
{
	unsigned char *p = s;

	while (n--)
		*p++ = (unsigned char)b;
	return (s);
}

/**
 * _calloc - allocantes memory for an array, using malloc
 * @nmemb: number of elements
 * @size: number of bytes
 * Return: as needed
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *pn;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pn = malloc(nmemb * size);
	if (pn == NULL)
		return (NULL);

	_memset(pn, 0, nmemb * size);
	return (pn);
}
