#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - this print the name of the file
 *
 * @argc: length of argv
 *
 * @argv: contain the passed argument
 *
 * Return: 1 or 0
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int result, first, second;

		first = atoi(argv[1]);
		second = atoi(argv[2]);
		result = first * second;
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
