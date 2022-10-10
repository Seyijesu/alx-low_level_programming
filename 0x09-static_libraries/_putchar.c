#include <unistd.h>

/**
 * _putchar - print characher to the satandard output
 *
 * @c: character to print
 *
 * Return: c
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
