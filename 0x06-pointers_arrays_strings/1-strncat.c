#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int hello;
	int string;

hello = 0;
while (dest[hello] != '\0')
{
hello++;
}
string = 0;
while (string < n && src[string] != '\0')
{
dest[hello] = src[string];
hello++;
string++;
}
dest[hello] = '\0';
return (dest);
}
