#include "main.h"
/**
 * reverse_array - function that inverts the contents of an integer array.
 * @a: an array of integers
 * @n: number of elements to swap
 */

void reverse_array(int *a, int n)
{
	int r = 0, t = 0;

	while (r < n--)
	{
		t = a[n];
		a[n] = a[r];
		a[r] = t;
		r++;
	}
}
