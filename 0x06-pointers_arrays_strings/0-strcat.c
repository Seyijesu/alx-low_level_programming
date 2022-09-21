#include "main.h"

/**
 * _strcat - concartinate two arrays
 *
 * @dest: the arry to be concartinated to
 *
 * @src: source of array to be used
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];

	}

	return (dest);

}
