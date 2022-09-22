#include "main.h"

/**
 * reverse_array - reverse array
 *
 * @a: array to be reversed
 *
 * @n: length of array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;
	int c;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		c = a[i];
		a[i] = a[j];
		a[j] = c;
		j--;

	}

}
