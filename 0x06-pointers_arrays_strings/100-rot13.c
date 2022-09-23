#include "main.h"

/**
 * rot13 - encode string with ROT13
 *
 * @a: string to encode
 *
 * Return: encodede a
 */
char *rot13(char *a)
{
	int i;
	int j;
	char lower[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char upper[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; lower[j] != '\0'; j++)
		{
			if (a[i] == lower[j])
			{
				a[i] = upper[j];
				break;
			}
		}
	}
	return (a);
}
