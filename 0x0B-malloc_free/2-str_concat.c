#include "main.h"
#include <stdlib.h>
/**
 * str_concat - getting the ends of input and add together for size
 * @s1: the input one to concat
 * @s2: the input two to concat
 * Return: s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
char *conct;
int hello, may;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

hello = may = 0;
while (s1[hello] != '\0')
hello++;
while (s2[may] != '\0')
may++;
conct = malloc(sizeof(char) * (hello + may + 1));
if (conct == NULL)
return (NULL);
hello = may = 0;
while (s1[hello] != '\0')
{
conct[hello] = s1[hello];
hello++;
}
while (s2[may] != '\0')
{
conct[hello] = s2[may];
hello++, may++;
}
conct[hello] = '\0';
return (conct);
}
