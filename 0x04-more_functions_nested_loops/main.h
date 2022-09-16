#ifndef _MAIN_H
#define _MAIN_H

/**
 * _putchar - this print out character into stdout
 *
 * @c: character to split out
 *
 * Return: void
 */
int _putchar(char c);

/**
 * _isupper - this check if a character is an uppercase
 *
 * @c: parameter to compare
 *
 * Return: 1 for true and 0 for false
 */
int _isupper(int c);


/**
 * _isdigit - this check if a character is an digit
 *
 * @c: parameter to compare
 *
 * Return: 1 for true and 0 for false
 */
int _isdigit(int c);

/**
 * mul - multiplying to unmber
 *
 * @a: first number
 *
 * @b: second number
 *
 * Return: a*b
 */
int mul(int a, int b);

/**
 * print_numbers - print from 0 to 9
 *
 * R: return: void
 *
 */
void print_numbers(void);

/**
 * print_most_numbers - print from 0 to 9 except 2 and 4
 *
 */
void print_most_numbers(void);

/**
 * more_numbers - this print number from 0 t0 14 x1o
 *
 */
void more_numbers(void);

/**
 * print_line - print lines
 *
 * @n: number of_ to print
 *
 */
void print_line(int n);

/**
 * print_diagonal - printa diagonal
 *
 * @n: number of time to print \
 *
 */
void print_diagonal(int n);

/**
 * print_square - print square
 *
 * @size: size of the sqaure
 *
 */
void print_square(int size);

/**
 * print_triangle - print triangle
 *
 * @size: size of triangle
 *
 */
void print_triangle(int size);
#endif
