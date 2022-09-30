#include "main.h"
#include <stdio.h>

/**
 * main - this print number of argument passed to the function
 *
 * @argc: this take the size of the arguments pass to the function
 *
 * @argv: a vector pointing to the string argument pass to the main
 *
 * Return: void
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
