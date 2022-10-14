#ifndef VERIADIC_FUNCTIONS_H
#define VERIADIC_FUNCTIONS_H
#include <stdarg.h>

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
/**
  * p_char - prints characters
  * @c: character to print
  */
void p_char(va_list c);

/**
  * p_int - prints integers
  * @i: integer to print
  */
void p_int(va_list i);

/**
  * p_float - prints floats
  * @f: float to print
  */
void p_float(va_list f);

/**
  * p_string - prints strings
  * @s: string to print
  */
void p_string(va_list s);

/**
  * print_all - prints any argument passed into it
  * @format: formats symbols in order
  */
void print_all(const char * const format, ...);

#define VALIDTYPESCONDITIONAL(i) (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's')
typedef struct validTypes
{
	char *valid;
	void (*f)();
} v_types;
#endif
