#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - will be printing the minimum number of coins
 * @argc: The number of arguments
 * @argv: The array of arguments
 * Return: 0, 1
 */
int main(int argc, char *argv[])
{
int code;
int hey;
int nope;
int coins[] = {25, 10, 5, 2, 1};
if (argc != 2)
{
printf("Error\n");
return (1);
}
code = atoi(argv[1]);
nope = 0;
if (code < 0)
{
printf("0\n");
return (0);
}
for (hey = 0; hey < 5 && code >= 0; hey++)
{
while (code >= coins[hey])
{
nope++;
code -= coins[hey];
}
}
printf("%d\n", nope);
return (0);
}
