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
