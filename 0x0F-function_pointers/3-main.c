#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - will be printing the results of simple operations.
 * @argc: number of arguments supplied to the program.
 * @argv: array of pointers to the arguments.
 * Return: nothing
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
int num4, num6;
char *lindo;
if (argc != 4)
{
printf("Error\n");
exit(98);
}
num4 = atoi(argv[1]);
lindo = argv[2];
num6 = atoi(argv[3]);
if (get_op_func(lindo) == NULL || lindo[1] != '\0')
{
printf("Error\n");
exit(99);
}
if ((*lindo == '/' && num6 == 0) |
(*lindo == '%' && num6 == 0))
{
printf("Error\n");
exit(100);
}
printf("%d\n", get_op_func(lindo)(num4, num6));
return (0);
}
