#include "main.h"

/**
 * int _isupper - the main function
 *
 * @c: entry parameter
 *
 * Return: 1 for true 0 for false
 *
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);

	return (0);
}
