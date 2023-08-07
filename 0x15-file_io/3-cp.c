#include <stdlib.h>
#include <stdio.h>
#include "main.h"
void close_file(int fd);
char *create_buffer(char *file);

/**
 * create_buffer - will be allocating bytes
 * @file: name of the file to be stored by buffer is storing chars for.
 * Return: A pointer
 */
char *create_buffer(char *file)
{
char *lindo;
lindo = malloc(sizeof(char) * 1024);
if (lindo == NULL)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", file);
exit(99);
}
return (lindo);
}

/**
 * close_file - will be closing the file descriptors.
 * @fd: file descriptor that will be closed.
 */
void close_file(int fd)
{
int take;
take = close(fd);
if (take == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}

/**
 * main - will be copying the contents
 * @argv: Array of pointers to the arguments.
 * @argc: Number of arguments
 * Return: 0
 * Description: If the argument count is incorrect will give different outcomes
 */

int main(int argc, char *argv[])
{
int lindo, take, roll, hi;
char *make;
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
make = create_buffer(argv[2]);
lindo = open(argv[1], O_RDONLY);
roll = read(lindo, make, 1024);
take = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
do {
if (lindo == -1 || roll == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't read from file %s\n", argv[1]);
free(make);
exit(98);
}
hi = write(take, make, roll);
if (take == -1 || hi == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", argv[2]);
free(make);
exit(99);
}
roll = read(lindo, make, 1024);
take = open(argv[2], O_WRONLY | O_APPEND);
} while (roll > 0);
free(make);
close_file(lindo);
close_file(take);
return (0);
}
