#include <stdio.h>

/**
 * main - prints any arguments entered with the program exe
 * @argv: points to the different arguments
 * @argc: count of the number of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int input;

	for (input = 0; input < argc; input++)
		printf("%s\n", argv[input]);
	return (0);
}
