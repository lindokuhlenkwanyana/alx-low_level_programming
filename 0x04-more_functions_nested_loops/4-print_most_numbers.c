#include "main.h"

/**
 * print_most_numbers - print the numbers since 0 to 9
 * Description: prints the numbers excluding 2 and 4
 * Return: The numbers since 0 up to 9
 */

void print_most_numbers(void)
{
int num;

for (num = 0 ; num <= 9 ; num++)
if (num == 2 || num == 4)

{
continue;
}
else
{
_putchar(num + 48);
}
_putchar('\n');
}
