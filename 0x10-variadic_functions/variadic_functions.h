#ifndef VERIADIC_FUNCTIONS_H
#define VERIADIC_FUNCTIONS_H

/**
 * sum_them_all - sum all arguments
 * @n: the number of arguments
 * Return: 0 if n is 0 else sum of the arguments
 */
int sum_them_all(const unsigned int n, ...);

/**
 * print_numbers - print number with separator
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...);

/**
 * print_strings - rints strings
 * @separator:  string to be printed between the strings
 * @n: number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...);
#endif
