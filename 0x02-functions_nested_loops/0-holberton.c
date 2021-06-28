#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char xyz[] = "Holberton\n";
	int c;

	for (c = 0; xyz[c] != '\0'; c++)
	{
	_putchar(xyz[c]);
	}
	return(0);
}
