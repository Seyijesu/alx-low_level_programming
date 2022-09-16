#include "main.h"

/**
 * print_diagonal - print diagonal line
 *
 * @n: number of \ to ptint
 *
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				_putchar(' ');
			}
			 _putcahr('\\');
			 _putchar('\n');

		}

	}

}
