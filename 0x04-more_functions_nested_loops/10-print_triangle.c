#include "main.h"

/**
 * print_triangle - print trangle parttarn
 *
 * @size: size of the triangle
 *
 */

void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size; j > 1; j--)
			{
				_putchar(' ');
			}

			for (k = 1; k+j <= size; k++)
			{
				_putchar('#');
			}

			_putchar('\n');

		}


	}

}
