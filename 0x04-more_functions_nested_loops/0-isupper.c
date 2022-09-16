#include "main.h"

/**
 * _isupper - this check for uppercase letter
 *
 * @c: parameter to compare
 *
 * Return: 1 or 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);

}
