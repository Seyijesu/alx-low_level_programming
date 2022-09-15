#include "main.h"

/**
 * _isdigit - this is a main function that check for digit
 *
 * @c: integar parameter
 *
 * Return: 1 for true and 0 for false
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
