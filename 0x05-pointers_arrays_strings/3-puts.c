#include "main.h"

/**
 * _puts - this print string and end with new line
 *
 * @str: the pointer parameter
 *
 * Return: void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(i);

	}
	_putchar('\n');
}
