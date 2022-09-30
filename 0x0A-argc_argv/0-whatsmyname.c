#include "main.h"
#include <stdio.h>

/**
 * main - this print the name of the file
 *
 * @argc: this take the size of the arguments pass to the function
 *
 * @argv: a vector pointing to the string argument pass to the main
 *
 * Return: void
 */

int main(int __attribute__((unused)) argc, char *argv[])
{
	printf("%s\n", *argv[0]);

	return (0);
}
