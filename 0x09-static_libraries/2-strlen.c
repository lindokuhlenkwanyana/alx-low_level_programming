#include "main.h"
/**
 * _strlen - returning the length of a string
 * @s: a string
 * Return: The length
 */
int _strlen(char *s)
{
int hello;
hello = 0;
while (*s != '\0')
{
hello++;
s++;
}
return (hello);
}
