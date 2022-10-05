#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concartinate two string
 *
 * @s1: string to concertinate too
 *
 * @s2: string to be concertinated
 *
 * Return: s1 + s2
 */

char *str_concat(char *s1, char *s2)
{
	int x;
	char *y;
	int z;
	int i;
	int j;
	int p;

	for (i = 0; s1[i] != '\0'; i++)
	{
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
	}

	if (j == 0 && i == 0)
	{

		x = i + j;

		y = malloc(sizeof(*y) * x + 1);

		if (y == NULL)
			return (NULL);

		for (z = 0; z < i; z++)
		{
			y[i] = s1[i];
		}

		j = 0;
		for (p = z; p < x; p++)
		{
			y[p] = s2[j];
		}
		y[x] = '\0';

	}

	free(y);
}
