#include "main.h"

/**
 * _strncpy - copies string
 *
 * @dest: destination to copy to
 *
 * @src: word to copy
 *
 * @n: number of character to copy
 *
 * Return: dest
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; src[i] != '\0'; i++)
	{
	}

	for (j = 0; j < n; j++)
	{
		if (i > j)
		{
			dest[j] = src[j];
		}
		else
		{
			dest[j] = '\0';
		}

	}

	return (dest);

}
