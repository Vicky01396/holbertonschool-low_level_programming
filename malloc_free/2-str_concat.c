#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
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
/**
 * str_concat - Concatenates two strings
 * @s1: a string
 * @s2: a string
 * Return: pointer to the array of null
 */
char *str_concat(char *s1, char *s2)
{
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	str = malloc(sizeof(char) * (strlen(s1) + strlen(s2)) + 1);
	if (str == NULL)
		return (NULL);
	_strcat(str, s1);
	_strcat(str, s2);
	return (str);
}
