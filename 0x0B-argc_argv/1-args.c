#include <stdio.h>

/**
 * main - prints the number of arguments input with the program
 * @argv: points to the different arguments
 * @argc: count of the number of arguments
 * Return: 0
 */
int main (int argc, char *argv[])
{
	if (*argv)
	{
		printf("%d\n", --argc);
	}
	return (0);
}
