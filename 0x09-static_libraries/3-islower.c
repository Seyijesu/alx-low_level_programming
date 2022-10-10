#include "main.h"

/**
 * _islower - this check if the input cahracher is lowercase alphabet
 *
 * @c: this is the parameter to check for
 *
 * Return: it return 1 for lowercase and 0 for uppercase
 *
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	return (0);

}
