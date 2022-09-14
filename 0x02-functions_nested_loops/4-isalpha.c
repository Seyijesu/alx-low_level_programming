#include "main.h"

/**
 * _isalpha - this function check for an alphabet
 *
 * @c: caracter to check for
 *
 * Return: return 1 for true and 0 for false
 *
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c >= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);

	}

	return (0);

}
