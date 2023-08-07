#include <stdlib.h>
#include "main.h"

/**
 * read_textfile- will be reading the text file print to STDOUT.
 * @letters: the number of letters that will be read
 * @filename: the text file being read
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *lindo;
ssize_t take;
ssize_t soon;
ssize_t t;
take = open(filename, O_RDONLY);
if (take == -1)
return (0);
lindo = malloc(sizeof(char) * letters);
t = read(take, lindo, letters);
soon = write(STDOUT_FILENO, lindo, t);
free(lindo);
close(take);
return (soon);
}
