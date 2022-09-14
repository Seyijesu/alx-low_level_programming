#ifndef _MAIN_H_
#define _MAIN_H_
/**
 * _putchar - thid function take a character and output it to the stdo it return int 
 * 
 * @c: this is the parameter a character
 *
 * Return: it return 0 or 1
 */
int _putchar(char c);

/**
 * print_alphabet - to print all lower case of the english alphabet
 *
 * Return: void
 *
**/
void print_alphabet(void);

/**
 *print_alphabet_x10 - this print 10 times english alphabet in lowercase
 *
 * Return: return void
 *
**/

void print_alphabet_x10(void);

/**
 * _islower - check for lowercase alphabet 
 *
 * @c: the argurment character
 *
 * Return: this return 1 for true and 0 for false
 *
 */
int _islower(int c);

/**
 * _isalpha - this check for alphabet 
 *
 * @c: characher to check for 
 *
 * Return: return 1 for true and 0 for false
 *
 */
int _isalpha(int c);

/**
 * print_sign - main function
 *
 * @value - parerter
 *
 */
int print_sign(int value);

/**
 * _abs - main funtion
 *
 * @sign: value to check
 *
 * Return: integar of the time
 *
 */
int _abs(int value);

/**
 * print_last_digit - mainfunction
 *
 * @value: parameter
 *
 * Return: last digit
 *
 */
int print_last_digit(int value);

/**
 * jack_bauer - main function
 *
 */
void jack_bauer(void);
/**

 * times_table - times this up
 *
 *
 */
void times_table(void);
#endif
