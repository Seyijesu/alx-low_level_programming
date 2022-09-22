#include "main.h"

/**
 * cap_string -  capitalizes all words of a string
 *
 * @a: words to capitalise
 *
 * Return: capitalised a
 */

char *cap_string(char *a)
{
	int i;
	int j;
	char s[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(',
		')', '{', '}'};

	for (i = 0; a[i] != '\0'; i++)
	{
		if (i == 0 && a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] = a[i] - 32;
		}
		for (j = 0; j < 13; j++)
		{
			if (a[i] == s[j])
			{
				if (a[i + 1] >= 'a' && a[i + 1] <= 'z')
				{
					a[i + 1] = a[i + 1] - 32;
					i++;
				}
			}
		}
	}

	return (a);
}
