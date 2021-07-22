#include <stdio.h>
#include <stdlib.h>

/**
 * main - uses __FILE__ to get name of file it was compiled from
 * Return: 0
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
