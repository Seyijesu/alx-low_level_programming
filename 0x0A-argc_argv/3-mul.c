#include "main.h"
#include <stdio.h>

/**
 * main - this print the name of the file
 *
 * @first: the first number
 *
 * @second: second number
 *
 * Return: 1 or 0
 */
int main(int first, int second)
{
	if (first && second)
	{
		int result = first * second;

		printf("%d\n", result);
	}
	else
	{
		printf("Error");
		return (1);
	}

	return (0);
}
