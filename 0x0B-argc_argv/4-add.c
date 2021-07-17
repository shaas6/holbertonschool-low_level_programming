#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - multiplication of two arguments with atoi
 * @argc: array of number of arguments to be called
 * @argv: the strings to be stored in the array argv
 * Return: Error returns 1, good math returns 0
 */
int main(int argc, char *argv[])
{
	int before = 0, after = 0, z, x;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (z = 1; z < argc; z++)
	{
		for (x = 0; argv[z][x] != '\0'; x++)
		{
			before = argv[z][x];
			if (isdigit(before) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		after += atoi(argv[z]);
	}
	printf("%d\n", after);
	return (0);
}
