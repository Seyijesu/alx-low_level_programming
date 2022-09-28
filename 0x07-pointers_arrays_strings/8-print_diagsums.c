#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sum of diagonal matrix
 *
 * @a: given arry
 *
 * @size: diagonal size
 *
 * Return: void
 *
 */

void print_diagsums(int *a, int size)
{
	int i;
	int di = 0;
	int di2 = 0;

	for (i = 0; i < size; i++)
	{
		di += a[(i * size) + i];
		di2 += a[(size - 1) + ((size - 1) * i)];
	}

	printf("%d, %d\n", di, di2);
}
