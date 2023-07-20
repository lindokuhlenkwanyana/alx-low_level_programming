#include <stdio.h>
#include <stdlib.h>

/**
 * main - printing its own opcodes
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return:will be 0 therefore nothing
 */
int main(int argc, char *argv[])
{
int hi, hello;
char *lindo;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
hi = atoi(argv[1]);
if (hi < 0)
{
printf("Error\n");
exit(2);
}
lindo = (char *)main;
for (hello = 0; hello < hi; hello++)
{
if (hello == hi - 1)
{
printf("%02hhx\n", lindo[hello]);
break;
}
printf("%02hhx ", lindo[hello]);
}
return (0);
}
