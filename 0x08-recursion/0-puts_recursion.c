#include "main.h"

/**
 * _puts_recursion - print strings
 *
 * @s: pointer to string to print
 *
 * Return: s
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(++s);
	}

	_putchar('\n');

}
