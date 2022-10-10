#pragma

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
 * _isupper - this check if a character is an uppercase
 *
 * @c: parameter to compare
 *
 * Return: 1 for true and 0 for false
 */
int _isupper(int c);

/**
 * _islower - this check if the input cahracher is lowercase alphabet
 *
 * @c: this is the parameter to check for
 *
 * Return: it return 1 for lowercase and 0 for uppercase
 *
 */
int _islower(int c);

/**
 * _isalpha - this function check for an alphabet
 *
 * @c: caracter to check for
 *
 * Return: return 1 for true and 0 for false
 *
 */
int _isalpha(int c);

/**
 * _abs - compute absolute value entered
 *
 * @value: number to check for
 *
 * Return: return absolute value
 *
 */
int _abs(int value);

/**
 * _strpbrk - function locates the first occurrence in the string
 *
 * @s: String to scan
 *
 * @accept: String to check for
 *
 * Return: memory location of the first occurrenc
 */
char *_strpbrk(char *s, char *accept);

/**
 * _strstr - function that locates a substring
 *
 * @needle: substring to look for
 *
 * @haystack: where to look for the substring
 *
 * Return: memory location
 */
char *_strstr(char *haystack, char *needle);

/**
 * _isupper - this check for uppercase letter
 *
 * @c: parameter to compare
 *
 * Return: 1 or 0
 */
int _isupper(int c);

/**
 * _isdigit - this check for digit number
 *
 * @c: parameter to compare
 *
 * Return: 1 or 0
 *
 */
int _isdigit(int c);

/**
 * _strlen - count the lenght of a string
 *
 * @s: pointer to the variable string
 *
 * Return: lenght of a variable string
 */
int _strlen(char *s);

/**
 * _putchar - print characher to the satandard output
 *
 * @c: character to print
 *
 * Return: c
 */
int _putchar(char c);

/**
 * _strcat - concartinate two arrays
 *
 * @dest: the arry to be concartinated to
 *
 * @src: source of array to be used
 */
char *_strcat(char *dest, char *src);

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
 * _strcmp - compare two string
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
 * _memset - sets memory to arry
 * @s: array to set
 * @b: value to set it
 * @n: number of times
 * Return: char value of s
 */
char *_memset(char *s, char b, unsigned int n);

/**
 * _strcpy - copy string function
 * @dest: destination of the new string
 * @src: the source string
 * Return: dest
 */
char *_strcpy(char *dest, char *src);

/**
 * _atoi - convert string to integer
 *
 * @s: string to check
 *
 * Return: 0 or the number
 *
 */
int _atoi(char *s);

/**
 * _puts - this print string and end with new line
 *
 * @str: the pointer parameter
 *
 * Return: void
 */
void _puts(char *str);

/**
 * _strcat - concartinate two arrays
 *
 * @dest: the arry to be concartinated to
 *
 * @src: source of array to be used
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src);
