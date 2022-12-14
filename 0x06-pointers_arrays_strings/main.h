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


/**
 * reverse_array - reverse array
 *
 * @a: array to be reversed
 *
 * @n: length of array
 *
 * Return: void
 */
void reverse_array(int *a, int n);


/**
 * string_toupper - string to uppercase
 *
 * @a: string to change
 *
 * Return: uppercase of a
 */
char *cap_string(char *);


/**
 * cap_string -  capitalizes all words of a string
 *
 * @a: words to capitalise
 *
 * Return: capitalised a
 */
char *cap_string(char *a);


/**
 * leet - encode string
 *
 * @a: string to encode
 *
 * Return: encoded a
 */
char *leet(char *a);


/**
 * rot13 - encode string with ROT13
 *
 * @a: string to encode
 *
 * Return: encodede a
 */
char *rot13(char *);
