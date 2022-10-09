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
	int i;
	int sign = 1;
	int number;

	for (i = 0; s[i] != '0' && s[i] != '9'; i++)
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
	}

	for (i = 0; s[i] != '\0'; ++i)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			number = ((int)s[i]) - 48;

			for (i = i + 1; s[i] != '\0'; ++i)
			{
				if (s[i] >= '0' && s[i] <= '9')
				{
					number = (number * 10) + ((int)s[i] - 48);
				}
				else
					return (number * sign);
			}

			return (number * sign);
		}
	}
	return (0);
}
