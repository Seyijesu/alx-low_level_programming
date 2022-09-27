#include <main.h>

/**
 * _memcpy -  function that copies memory area
 *
 * @dest: pointer to the source of data to be copied
 *
 * @src: sourc to copy byte from
 *
 * @n: number of byte to copy
 *
 * Return: dest
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];

	}

	return (dest);

}
