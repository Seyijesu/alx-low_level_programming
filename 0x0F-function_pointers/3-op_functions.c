#include <stdio.h>
#include <stdlib>

/**
 * op_add - add two numbers
 * @a: first number
 * @b: second number
 * Return: sume of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - defference of two numbers
 * @a: the first number
 * @b: the second number
 * Return: defference between a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculate product of a and b
 * @a: first number
 * @b: second number
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of two numbers
 * @a: numerator
 * @b: non-zero denorminator
 * Return: division of a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulus of two number
 * @a: first number
 * @b: the divisor
 * Return: the modulus of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}