/**
 * int_index - searches for an integer
 * @array: array of integers to check
 * @size: size of array
 * @cmp: function pointing to be used to compare
 * Return: index of first int or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size > 0 && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	return (-1);
	}
	return (-1);
}
