#include "main.h"
/**
 * swap_int - function that exchanges the values of two integers.
 * @a: variable
 * @b: variable
 */
void swap_int(int *a, int *b)
{
	int h = *a;

	*a = *b;
	*b = h;
}
