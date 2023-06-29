#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @s: pointer to string params
 *
 * Return: *s
 */

char *rot13(char *s)
{
int mi;
int si;
char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (mi = 0; s[mi] != '\0'; mi++)
{
for (si = 0; si < 52; si++)
{
if (s[mi] == data1[si])
{
s[mi] = datarot[si];
break;
}
}
}
return (s);
}
