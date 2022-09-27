/**
 * _memset - sets memory to arry
 * @s: array to set
 * @b: value to set it
 * @n: number of times
 * Return: char value of s
 */
char *_memset(char *s, char b, unsigned int n);

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
char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _strchr -  a function that locates a character in a string
 * @s: string to search from
 * @c: character to look for
 * Return: s startting from the first occurrence of c to the end of s
 */
char *_strchr(char *s, char c);

/**
 * _strspn - function that gets the length of a prefix substring
 *
 * @s: the main string to scan
 *
 * @accept: stings that we are looking for
 *
 * @Return: number of how times those character appare in the first segement
 *
 */
unsigned int _strspn(char *s, char *accept);
