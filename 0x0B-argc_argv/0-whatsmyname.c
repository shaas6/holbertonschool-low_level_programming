#include <stdio.h>

/**
 * main - prints whatever the program is named
 * @argv: pointer to the string
 * @argc: number of strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc >= 0)
		printf("%s\n", *argv);
	return (0);
}
