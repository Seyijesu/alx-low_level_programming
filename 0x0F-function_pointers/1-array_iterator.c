#include <stddef.h>

/**
 * array_iterator - print the element of the funtion array
 * @size: length of the array
 * @action: pointer to the function you need to use
 * @array: pointer to array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
