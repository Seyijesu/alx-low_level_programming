#include "main.h"

/**
 * _strlen_recursion - count length of string
 *
 * @s: pointing to the string to count
 *
 * Return: returns the length of s
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len = _strlen_recursion(s + 1);
		return (len += 1);
	}
	return (0);

}
