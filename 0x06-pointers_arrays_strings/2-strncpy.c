#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @n: input value
 *
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
