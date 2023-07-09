#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
int lindo;
lindo = 0;
int zama;
zama = 0;

while (*(src + lindo) != '\0')
{
lindo++;
}
for ( ; zama < lindo ; zama++)
{
dest[zama] = src[zama];
}
dest[lindo] = '\0';
return (dest);
}
