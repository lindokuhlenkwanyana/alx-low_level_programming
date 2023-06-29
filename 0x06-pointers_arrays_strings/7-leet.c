#include "main.h"
/**
 * leet - encode into 1337speak
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
int mi, si;
char s1[] = "aAeEoOtTlL";
char s2[] = "4433007711";

for (mi = 0; n[mi] != '\0'; mi++)
{
for (si = 0; si < 10; si++)
{
if (n[mi] == s1[si])
{
n[mi] = s2[si];
}
}
}
return (n);
}
