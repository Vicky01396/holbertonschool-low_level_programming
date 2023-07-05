#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
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
	strcat(str, s1);
	strcat(str, s2);
	return (str);
}
