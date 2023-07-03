#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints tha name of the funtion
 * @argc: how many arguments are
 * @argv: the string
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int j, v;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	j = atoi(argv[1]);
	v = atoi(argv[2]);
	printf("%d\n", j * v);
	return (0);
}
