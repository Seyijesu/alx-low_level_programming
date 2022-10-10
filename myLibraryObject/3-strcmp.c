#include "main.h"

/**
 * _strcmp - compare two string
 *
 * @s1: the first word
 *
 * @s2: the second word
 *
 * Return: greater less or equal to zero if s1 is greater less equal s2
 *
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] - s2[i] != 0)
		{
			return (s1[i] - s2[i]);
		}
	}

	return (0);

}
