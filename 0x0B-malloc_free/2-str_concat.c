
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concertination
 *
 * @s1: first string
 *
 * @s2: second sering
 *
 * Return: NULL or the concertinated string
 *
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, total;
	char *myChar;

	if (s1 ==  NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}

	total = i + j;
	myChar = malloc(sizeof(char) * total + 1);
	if (myChar == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		myChar[i] = s1[i];

	for (j = 0; s2[j] != '\0'; j++)
	{
		myChar[i] = s2[j];
		i++;
	}
	myChar[i] = '\0';
	return (myChar);
	free(myChar);
}
