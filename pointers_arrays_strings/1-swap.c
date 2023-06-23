#include "main.h"
/**
 * swap_int - function that exchanges the values of two integers.
 * @a: first poiter
 * @b: second pointer
 */
void swap_int(int *a, int *b)
{
	int p = *b;

	*b = *a;
	*a = p;
}
