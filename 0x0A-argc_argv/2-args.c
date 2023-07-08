#include <stdio.h>
#include "main.h"



/**
 * main - will be printing all arguments  received
 * @argc: The  number of arguments
 * @argv: The array of arguments
 * Return: 0
 */


int main(int argc, char *argv[])
{
int hey;
for (hey = 0; hey < argc; hey++)
{
printf("%s\n", argv[hey]);
}
return (0);
}
