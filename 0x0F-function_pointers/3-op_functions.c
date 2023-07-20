#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add -  will return the sum of two numbers.
 * @a: first number.
 * @b: second number.
 * Return: sum of a & b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - will be returning the difference of two numbers.
 * @a: first number.
 * @b: second number.
 * Return:  Difference of a & b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - will return the product of two numbers.
 * @a: first number.
 * @b: second number.
 * Return:  product of a and b.
 */

int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - will be returning the division of two numbers.
 * @a: first number.
 * @b: second number.
 * Return: quotient of a and b.
 */
int op_div(int a, int b)
{
return (a / b);
}

/**
 * op_mod - will return the remainder of the division of two numbers.
 * @a: first number.
 * @b: second number.
 * Return: remainder of  a by b.
 */
int op_mod(int a, int b)
{
return (a % b);
}
