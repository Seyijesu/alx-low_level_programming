#include "main.h"
#include "6-abs.c"
/**
 * print_last_digit - print the last digit of a number entered
 *
 * @value: the number to check for
 *
 * Return: absolut value % 10
 *
 */

int print_last_digit(int value)
{
	_putchar(_abs(value % 10));
	return (_abs(value % 10));
}
