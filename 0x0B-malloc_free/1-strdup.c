#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - stringup
 *
 * @str: pointer to string
 *
 * Return: NULL or the pointer arry
 *
 */
char *_strdup(char *str)
{
	int len;
	int i;
	char *myChar;

	if (str == NULL)
	{
		return (NULL);
	}
	for (len = 0; str[len] != '\0'; len++)
	{
	}

	myChar = malloc(sizeof(*myChar) * len + 1);

	if (myChar == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		myChar[i] = str[i];
	}

	myChar[i] = '\0';
	return (myChar);
	free(myChar);
}
