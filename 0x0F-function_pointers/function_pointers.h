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

/**
 * int_index - searches for an integer
 * @array: array of integers to check
 * @size: size of array
 * @cmp: function pointing to be used to compare
 * Return: index of first int or -1
 */
int int_index(int *array, int size, int (*cmp)(int));

#endif
