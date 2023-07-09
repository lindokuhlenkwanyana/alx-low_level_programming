#include "main.h"
/**
 * _strcmp - compare string values
 * @s1: input value
 * @s2: input value
 *
 * Return: s1[i] - s2[i]
 */
int _strcmp(char *s1, char *s2)
{
int hello;

hello = 0;
while (s1[hello] != '\0' && s2[hello] != '\0')
{
if (s1[hello] != s2[hello])
{
return (s1[hello] - s2[hello]);
}
hello++;
}
return (0);
}