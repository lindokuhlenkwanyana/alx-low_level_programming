#include "main.h"

/**
 * _strcat - will concatenate two strings
 * @dest: input value
 * @src: input value
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
int hello;
int j;

hello = 0;
while (dest[hello] != '\0')
{
hello++;
}
j = 0;
while (src[j] != '\0')
{
dest[hello] = src[j];
hello++;
j++;
}

dest[hello] = '\0';
return (dest);
}
