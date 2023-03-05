#include "main.h"
/**
 * print_diagsums - Print the sum of two diagonals of a square integer matrix
 * @a: first element of the array
 * @size: Size of the array
 */
void print_diagsums(int *a, int size)
{
	int l = 0;
	int	r = 0;
	int	k;

	for (k = 0; k < size; k++)
	{
		l += a[k];
		a += size;
	}
	a -= size;
	for (k = 0; k < size; k++)
	{
		r += a[k];
		a -= size;
	}
	printf("%d, %d\n", l, r);
}
