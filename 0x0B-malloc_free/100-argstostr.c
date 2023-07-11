#include "main.h"

#include <stdlib.h>

/**
 * argstostr - point of entry
 * @ac: an int input
 * @av: a double pointer array
 * Return: empty
 */

char *argstostr(int ac, char **av)

{
int i, n, r = 0, l = 0;
char *aaa;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (n = 0; av[i][n]; n++)
l++;
}
l += ac;
aaa = malloc(sizeof(char) * l + 1);
if (aaa == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (n = 0; av[i][n]; n++)
{
aaa[r] = av[i][n];
r++;
}
if (aaa[r] == '\0')
{
aaa[r++] = '\n';
}
}
return (aaa);
}
