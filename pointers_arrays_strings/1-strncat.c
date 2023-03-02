#include "main.h"
/**
 * _strncat - function that concatenates two strings.
 * @src: string
 * @dest: of the overwritten string
 * @n: interger
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int h;
	int w;

	for (h = 0; dest[h] != '\0'; h++)
	{
	}
	for (w = 0; (dest[h + w] = *src++) != '\0' && w < (n - 1); w++)
	{
	}
	return (dest);
}
