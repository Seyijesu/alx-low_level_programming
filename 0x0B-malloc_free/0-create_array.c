#include "main.h"
#include <stdlib.h>

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
	if (size == 0)
		return (0);

	char *myChar;

	myChar = malloc(sizeof(*myChar) * size);
	if (myChar == NULL)
		return (NULL);
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		myChar[i] = c[i];
	}
	
	return (0);

}
