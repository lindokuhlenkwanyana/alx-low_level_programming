#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - will be duplicating to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
char *www;
int hello, r = 0;
hello = 0;

if (str == NULL)
return (NULL);
while (str[hello] != '\0')
hello++;
www = malloc(sizeof(char) * (hello + 1));
if (www == NULL)
return (NULL);
for (r = 0; str[r]; r++)
www[r] = str[r];
return (www);
}
