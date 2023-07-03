#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - prints tha name of the funtion
 * @argc: how many arguments are
 * @argv: the string
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int j, v, add = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (j = 1; j < argc; j++)
	{
		for (v = 0; argv[j][v]; v++)
		{
			if (isdigit(argv[j][v]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[j]);
	}
	printf("%d\n", add);
	return (0);
}
