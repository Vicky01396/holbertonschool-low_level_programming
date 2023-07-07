#include "main.h"
/**
 * _strlen - function that returns the length of a string.
 * @s: char pointer
 * Return: the length of a string.
 */
int _strlen(char *s)
{
	int cont = 0;

	for (; s[cont] != '\0';)
	{
		cont++;
	}
	return (cont);
}

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

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}
	return (s);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: a string
 * @s2: a string
 * @n: the number of bytes of the second string
 * Return: pointer to the array or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	if (n >= len2)
		n = len2;

	str = malloc(sizeof(char) * (len1 + n + 1));
	if (str == NULL)
		return (NULL);
	_memset(str, 0, len1 + n + 1);
	_strcat(str, s1);
	_strncat(str, s2, n);
	return (str);
}
