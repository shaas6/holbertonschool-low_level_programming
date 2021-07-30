#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings - does what it says
 * @separator: separates the strings
 * @n: arg count
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int x;
	char *s;

	va_start(strings, n);
	for (x = 0; x < n; x++)
	{
		s = va_arg(string_list, char *);
		if (string != NULL)
			printf("%s", s);
		else
			printf("%p", s);
		if (x < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(string_list);
}
