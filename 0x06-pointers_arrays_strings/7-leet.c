#include "main.h"

/**
 * leet - encode string
 *
 * @a: string to encode
 *
 * Return: encoded a
 */
char *leet(char *a)
{
	int i;
	int j;

	char s[] = "a4A4e3E3o0O0t7T7l1L1";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (a[i] == s[j] && ((a[i] >= 'a' && a[i] <= 'z')
						|| (a[i] >= 'A' && a[i] <= 'Z')))
			{
				a[i] = s[j + 1];
				break;
			}
		}
	}

	return (a);

}
