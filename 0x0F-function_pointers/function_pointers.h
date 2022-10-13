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

/**
 * array_iterator - print the element of the funtion array
 * @size: length of the array
 * @action: pointer to the function you need to use
 */
void array_iterator(int *array, size_t size, void (*action)(int));
#endif
