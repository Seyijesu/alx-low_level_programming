#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
/**
 * _putchar - print characher to the satandard output
 *
 * @c: character to print
 *
 * Return: c
 */

int _putchar(char c);
void print_name(char *name, void (*f)(char *));
#endif
