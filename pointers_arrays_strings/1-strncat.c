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
	int length = 0;
	int i = 0;

	while (dest[length])
		length++;

	while (i < n && src[i] != '\0')
	{
	dest[length++] = src[i++];
	}
	dest[length] = '\0';
	return (dest);
}
