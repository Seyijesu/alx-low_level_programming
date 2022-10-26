#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - function that return number of elements in linked list
 * @h: link to the structure
 * Return: number of elements in the node
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
