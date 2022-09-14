#include "ain.h"

/**
 * _abs - compute absolute value entered
 *
 * @value: number to check for
 *
 * Return: return absolute value
 *
 */

int _abs(int value)
{
	if (value > 1)
		return (value);
	else
		return (-1 * value);
}
