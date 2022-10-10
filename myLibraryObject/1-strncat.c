#include <stdio.h>

/**
 * _strncat - concetename two array
 *
 * @dest: destinantion
 *
 * @src: source
 *
 * @n: number of character to concertename
 *
 * Return: concertenated dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];

	}

	dest[i + j] = '\0';
	return (dest);

}
