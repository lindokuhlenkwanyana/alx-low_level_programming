#include "main.h"
/**
 * _strncat - will be concatenating two strings
 * @dest: an input value
 * @src: an input value
 * @n: an input value
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int hello;
int hi;

hello = 0;
hi = 0;
while (dest[hi] != '\0')
{
hello++;
}
while (hi < n && src[hi] != '\0')
{
dest[hello] = src[hi];
hello++;
hi++;
}
dest[hello] = '\0';
return (dest);
}
