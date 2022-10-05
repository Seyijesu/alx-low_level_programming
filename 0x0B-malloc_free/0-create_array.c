#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - function that creates an array of chars
 *
 * @size: size of the character
 *
 * @c: pointer to the character arry
 *
 * Return: 0 or NULL
 *
 */
char *create_array(unsigned int size, char c)
{
	char *myChar;

	if (size == 0)
		return (0);

	myChar = malloc(sizeof(*myChar) * size);
	if (myChar == NULL)
		return (NULL);

	myChar[0] = c;
	return (myChar);
}
