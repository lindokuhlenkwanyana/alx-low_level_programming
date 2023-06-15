#include <stdio.h>
/**
 * main - A program that pints out all the data types and their sizes
 * Return: 0
 */
int main(void)
{
char a;
int b;
long int c;
long long d;
float f;

printf("Size of a char: %lu bytes(s)\n", sizeof(a));
printf("Size of an int: %lu bytes(s)\n", sizeof(b));
printf("Size of a long int: %lu bytes(s)\n", sizeof(c));
printf("Size of a long long int: %lu bytes(s)\n", sizeof(d));
printf("Size of a float: %lu bytes(s)\n", sizeof(f));
return (0);
}
