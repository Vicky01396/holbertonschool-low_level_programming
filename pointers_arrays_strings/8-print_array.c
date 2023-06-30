#include "main.h"
#include <stdio.h>
/**
 * print_array - function that prints n elements of an array of integers
 * @a: pointer to the array
 * @n: number of elements to print
 */
void print_array(int *a, int n)
{
	int rec = 0;

	while (rec < n)
	{
		if (rec != n - 1)
		{
			printf("%d, ", a[rec]);
		}
		else
		{
			printf("%d", a[rec]);
		}
		rec++;
	}
	printf("\n");
}
