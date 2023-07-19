#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - printing the name using pointer to function
 * @name: the string to be added
 * @f: the pointer to function
 * Return: will be 0
 */
void print_name(char *name, void (*f)(char *))
{ 
printf("%s\n", name);
(*f)(name)
}
