#include "main.h"

/**
 * print_sign - this check if the number is positive negetive or zero
 *
 * @sign: what to check for
 *
 * Return: 1 for positive 0 for 0 and - for negetive
 *
 */

int print_sign(int sign)
{

	if (sign > 0)
	{
		_putchar('+');
		return (1);

	}
	else if (sign == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}

}
