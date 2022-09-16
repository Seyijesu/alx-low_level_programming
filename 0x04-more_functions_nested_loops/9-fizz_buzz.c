#include "main.h"

/**
 * fizz_buzz - print form 1 to 10
 *
 */
void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			_putchar('FizzBuzz');
		}
		else if (i % 3 == 0)
		{
			_putchar('Fizz');
		}
		else if (i % 5)
		{
			_putchar('Buzz');
		}
		else
		{
			_putchar(i);
		}

		_putchar(' ');
	}

	_putchar('\n');
}
