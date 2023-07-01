#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatenate two strings
 * @dest: destination string
 * @src: origin string
 * Return: always 0
 */
char *_strcat(char *dest, char *src)
{
	int a = 0, b;

	while (dest[a] != '\0')
	{
		a++;
	}
	for (b = 0; src[b] != '\0'; a++, b++)
	{
		dest[a] = src[b];
	}
	dest[a] = '\0';
	return (dest);
}
