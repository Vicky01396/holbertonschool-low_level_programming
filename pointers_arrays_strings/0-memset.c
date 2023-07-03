#include "main.h"
/**
 * _memset - function that fills memory with a constant byte.
 * @s: the pointer to the memory
 * @b: constant byte
 * @n: number of byte to be fills
 *
 *Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;
	int num = 0;

	for (; s[num] != '\0'; num++)
	{
		j++;
	}
	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}
	return (s);
}
