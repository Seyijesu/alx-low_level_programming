#include "main.h"

/**
 * print_alphabet_x10 - this print 10 times lowercase english alphabet
 *
 * Return: void
 *
**/

void print_alphabet_x10(void)
{
	char i;
	int count;

	for (count = 0; count <= 9; count++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);

		}

		_putchar('\n');

	}

}
