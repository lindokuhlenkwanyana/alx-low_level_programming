#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - Selecting the correct function to be performed
 * by the operation asked by the user.
 * @s: operator passed as argument.
 * Return: the pointer to the function corresponding
 *to the opeator
 */

int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL},
};
int lindo = 0;
while (ops[lindo].op != NULL && *(ops[lindo].op) != *s)
lindo++;
return (ops[lindo].f);
}
