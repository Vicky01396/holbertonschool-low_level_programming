#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Function that returns a pointer to a newly allocated space in
 * memory, containing a copy of the string given as parameter.
 * @str: The string to duplicate
 * Return: Pointer to the string or NULL
 */
char *_strdup(char *str)
{
	char *dup = NULL;
	int x1 = 0, y2 = 0;

	if (str == NULL)
		return (NULL);
	while (str[y2] != '\0')
		y2++;
	dup = malloc(sizeof(char) * (y2 + 1));
	if (dup == NULL)
		return (NULL);
	for (; x1 <= y2; x1++)
		dup[x1] = str[x1];
	return (dup);
}
