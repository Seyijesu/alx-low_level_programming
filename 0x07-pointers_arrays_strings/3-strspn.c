#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 *
 * @s: the main string to scan
 *
 * @accept: stings that we are looking for
 *
 * Return: number of how times those char appare in the 1 segement
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int len = 0;

	for (i = 0; s[i] != ','; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accpet[j])
			{
				len++;
				break;
			}
		}
		if (s[j] == '\0')
		{
			return (len);
		}
	}

	return (len);
}
