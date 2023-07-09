#include "main.h"
/**
 *_memcpy - function that copies memory area
 *@dest: The memory where is stored
 *@src: memory where is copied
 *@n: number of bytes
 *Return: 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int hi = 0;
	int hello = n;
for (; hi < hello; hi++)
{
dest[hi] = src[hi];
n--;
}
return (dest);
}
