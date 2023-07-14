#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - will be concatenating n bytes of a string
 * @s1: string to be append
 * @s2: string to be concatenate from
 * @n: the number of bytes from s2 to concatenate to s1
 * Return: 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
unsigned int lindo = 0, lubanzi = 0, len1 = 0, len2 = 0;
while (s1 && s1[len1])
len1++;
while (s2 && s2[len2])
len2++;
if (n < len2)
s = malloc(sizeof(char) * (len1 + n + 1));
else
s = malloc(sizeof(char) * (len1 + len2 + 1));
if (!s)
return (NULL);
while (lindo < len1)
{
s[lindo] = s1[lindo];
lindo++;
}
while (n < len2 && lindo < (len1 + n))
s[lindo++] = s2[lubanzi++];
while (n >= len2 && lindo < (len1 + len2))
s[lindo++] = s2[lubanzi++];
s[lindo] = '\0';
return (s);
}
