#include "main.h"
/**
 * _strstr - Point of entry
 * @haystack: an input
 * @needle: an input
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *s = haystack;
char *m = needle;
while (*s == *m && *m != '\0')
{
s++;
m++;
}
if (*m == '\0')
return (haystack);
}
return (0);
}
