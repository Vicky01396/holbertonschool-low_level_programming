#include "main.h"

/**
 * *_strncpy - function that concatenates two strings.
 * @src: string
 * @dest: of the overwritten string
 * @n: interger
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int m;

	for (m = 0; m < n && src[m] != '\0'; m++)
	{
		dest[m] = src[m];
	}
	for (; m < n; m++)
	{
		dest[m] = '\0';
	}
	return (dest);
}
