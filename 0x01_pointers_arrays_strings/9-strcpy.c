#include "main.h"
/**
 * _strcpy - function that copies the string pointed to by src,
 * to the buffer pointed to by dest.
 * @dest: destination of the copy
 * @src: pointer to the string
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *met = dest;

	while ((*met++ = *src++) != '\0')
	{
		;
	}
	return (dest);
}
