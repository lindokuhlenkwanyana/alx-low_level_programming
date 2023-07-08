#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - checking a string
 * @str: The array str
 * Return: 0
 */
int check_num(char *str);
{
unsigned int take;
take = 0;
while (take < strlen(str))
{
if (!isdigit(str[take]))
{
return (0);
}
take++;
}
return (1);
}
