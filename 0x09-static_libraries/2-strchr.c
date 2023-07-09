#include "main.h"
/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
int hello = 0;

for (; s[hello] >= '\0'; hello++)
{
if (s[hello] == c)
return (&s[hello]);
}
return (0);
}
