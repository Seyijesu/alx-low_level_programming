#include <stdio.h>
#include <string.h>
#include "2-strlen.c"

/**
 * print_rev - print reverse of string
 *
 * @s: parameter
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i, l, j;

	l = _strlen(s);
	j = l - 1;

	char temp[_strlen(s)];

	for (i = 0; i < l; i++)
	{
		temp[i] = s[j];
		j--;
	}
	puts(temp);

}
