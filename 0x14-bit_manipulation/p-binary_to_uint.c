#include <stdio.h>
#include <stdlib.h>

typedef struct Binary
{
	int data;
	struct Binary *next;
}node;

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, j, k;
	unsigned int number = 0, result = 0;
	unsigned int _power = 1, _base = 2;
	node *head = NULL;
	node *current = NULL;

	for (j = 0; b[j] != '\0'; j++)
		continue;

	j = j - 1;

	for (i = 0; b[i] != '\0'; i++)
	{
		
		node *new_node = malloc(sizeof(node));
		if (head == NULL)
		{
			head = new_node;
		}

		if (b[i] >= '0' && b[i] <= '1')
		{
			number = (b[i] - 48);
			for (k = 0; k < j; k++)
			{
				_power *= _base;
			}
			new_node->data = number * _power;
			new_node->next = NULL;
			_power = 1;
			j--;

			if (head != new_node)
			{
				current = head;
				while (current->next != NULL)
				{
					current = current->next;
				}
				current->next = new_node;
			}
		}
		
		else
		{
			return (0);
		}

	}
	for (current = head; current != NULL; current = current->next)
	{
		printf("%d\n", current->data);
		result += current->data;
	}
	printf("Result: %u\n", result);
	return (result);
}
