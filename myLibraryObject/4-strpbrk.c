#include "main.h"

/**
 * _strpbrk - function locates the first occurrence in the string
 *
 * @s: String to scan
 *
 * @accept: String to check for
 *
 * Return: memory location of the first occurrenc
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (0);
}
