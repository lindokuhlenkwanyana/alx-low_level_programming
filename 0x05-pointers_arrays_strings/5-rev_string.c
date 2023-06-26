#include "main.h"


/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
char rev = s[0];
int string = 0;
int x;
while (s[string] != '\0')
string++;
for (x = 0; x < string; x++)
{
string--;
rev = s[x];
s[x] = s[string];
s[string] = rev;
}
}
