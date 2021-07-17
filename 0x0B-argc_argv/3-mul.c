#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplication of two arguments with atoi
 * @argc: array of number of arguments to be called
 * @argv: the strings to be stored in the array argv
 * Return: Error returns 1, good math returns 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
