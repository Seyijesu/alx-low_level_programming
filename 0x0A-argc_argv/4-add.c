#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - starting point
 *
 * @argc: length of argument passed
 *
 * @argv: string vector of argument passed
 *
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{

	int i, j;
	char *c;
	int addition = 0;

	if (argc < 2)
		return (printf("%d\n", 0));

	for (i = 1; argc > i; i++)
	{
		c = argv[i];

		for (j = 0; c[j] != '\0'; j++)
		{
			if (!isdigit(c[j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		addition += atoi(argv[i]);
	}

	printf("%d\n", addition);
	return (0);
}
