#include "main.h"

/**
 * _strstr - function that locates a substring
 *
 * @needle: substring to look for
 *
 * @haystack: where to look for the substring
 *
 * Return: memory location
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (needle[0] == '\0')
	{
		return (haystack);
	}

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] != needle[j])
					break;
			}
			if (needle[j] == '\0')
				return (haystack + i);
		}
	}
	return ('\0');
}
