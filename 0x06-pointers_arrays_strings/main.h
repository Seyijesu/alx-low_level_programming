/**
 * _strcat - concartinate two arrays
 *
 * @dest: the arry to be concartinated to
 *
 * @src: source of array to be used
 */
char *_strcat(char *dest, char *src);


/**
 * _strncat - concetename two array
 *
 * @dest: destinantion
 * @src: source
 * @n: number of character to concertename
 *
 * Return: concertenated dest
 */
char *_strncat(char *dest, char *src, int n);


/**
 * _strncpy - copies string
 *
 * @dest: destination to copy to
 *
 * @src: word to copy
 *
 * @n: number of character to copy
 *
 * Return: dest
 *
 */
char *_strncpy(char *dest, char *src, int n);


/**
 * _strcmp: compare two string
 *
 * @s1: the first word
 *
 * @s2: the second word
 *
 * Return: greater less or equal to zero if s1 is greater less equal s2
 *
 */
int _strcmp(char *s1, char *s2);
