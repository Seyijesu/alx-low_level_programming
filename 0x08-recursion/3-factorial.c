#include "main.h"

/**
 * factorial - get a factorial of number
 *
 * @n: number to find its factorial
 *
 * Return: n factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n > 0)
		return (factorial(n - 1) * n);
	return (1);
}
