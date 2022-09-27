#include "main.h"

/**
 * _strchr -  a function that locates a character in a string
 * @s: string to search from
 * @c: character to look for
 * Return: s startting from the first occurrence of c to the end of s
 */

char *_strchr(char *s, char c)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);

		}

	}

	return(NULL);

}
