#include "main.h"
/**
 * _strncpy - copying a string
 * @dest: an input value
 * @src: an input value
 * @n: an input value
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int hello;
hello = 0;
while (hello < n && src[hello] != '\0')
{
dest[hello] = src[hello];
hello++;
}
while (hello < n)
{
dest[hello] = '\0';
hello++;
}
return (dest);
}
