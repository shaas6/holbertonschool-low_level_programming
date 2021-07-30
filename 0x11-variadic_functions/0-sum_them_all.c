#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - sum of args
 * @n: number of args
 * Return: sum or 0;
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list newlist;
	int sum = 0;
	unsigned int x;

	if (n == 0)
		return (0);
	va_start(newlist, n);
	for (x = 0; x < n; x++)
		sum += va_arg(newlist, int);
	va_end(newlist);
	return (sum);
}
