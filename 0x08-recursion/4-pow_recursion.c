#include "main.h"

/**
 * _pow_recursion - calculate power of x to y
 *
 * @x: base number
 *
 * @y: index
 *
 * Return: x to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (1);
}
