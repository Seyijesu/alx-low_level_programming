#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum all arguments
 * @n: the number of arguments
 * Return: 0 if n is 0 else sum of the arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int answer = 0;
	va_list ap;

	if (n == 0)
		return (0);

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		answer += va_arg(ap, int);
	}
	return (answer);
}
