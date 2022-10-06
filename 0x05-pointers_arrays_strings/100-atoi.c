#include "main.h"

/**
 * _atoi - convert string to integer
 *
 * @s: string to check
 *
 * Return: 0 or the number
 *
 */

int _atoi(char *s)
{
	int i, j;
	int number;
	int sign = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == j)
			{
				if (s[i - 1] == '-')
					sign = -1;

				number = s[i];
				i++;
				for (next = 0; s[i] != '\0'; next++)
				{
					if (s[i] == next)
					{
						number = number * 10 + next;
						i++;
					}
					else
					{
						return (number * sign);
					}
				}
				return (number * sign);
			}
		}
	}
	return (0);
}
