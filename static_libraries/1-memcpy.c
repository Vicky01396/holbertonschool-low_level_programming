#include "main.h"
/**
 * _memcpy - function that fills the memory with a constant byte.
 * @src: the memory area to copy from
 * @n: the number of bytes
 * @dest: where to copy memory
 *
 *  Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
