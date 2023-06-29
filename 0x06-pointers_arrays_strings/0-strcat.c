#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int hello;
	int string;

hello = 0;
while (dest[hello] != '\0')
{
hello++;
}
string = 0;
while (src[string] != '\0')
{
dest[hello] = src[string];
hello++;
string++;
}
dest[hello] = '\0';
return (dest);
}

