#include "main.h"
/**
 * _strlen - function that returns the length of a string.
 * @s: variable
 * Return: 0
 */
int _strlen(char *s)
{
	int k = 0;

	while (*(s + k) != '\0')
	{
		k++;
	}
	return (k);
}
