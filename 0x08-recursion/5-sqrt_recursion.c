#include "main.h"

/**
 * check - to check if it is correct
 *
 * @i: the number to get
 *
 * @n: number to get its root
 *
 * Return: root of n
 */

int check(int i, int n)
{
	int j;

	if (i * 1 != n)
	{
		if (i > n)
		{
			return (-1);
		}

		j = check(i + 1, n);
		return (j + 1);
	}
	return (0);
}

/**
 * _sqrt_recursion - get natural sqaure root of a number
 *
 * @n: number to get its root
 *
 * Return: root of n
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (check(i, n) == n && n != 1)
		return (-1);
	return (check(i, n));
}
