#include "main.h"
#include <stdio.h>
/**
 * print_array - function that prints n elements of an array of integers
 * @a: pointer to the array
 * @n: number of elements to print
 */
void print_array(int *a, int n)
{
	int g = 0;

	while (g < n)
	{
		if (g != n - 1)
		{
			printf("%d, ", a[g]);
		}
		else
		{
			printf("%d", a[g]);
		}
		g++;
	}
	printf("\n");
}
