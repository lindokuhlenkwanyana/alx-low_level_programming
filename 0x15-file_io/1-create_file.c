#include "main.h"

/**
 * create_file - will be creating the file
 * @text_content: The pointer to a string to write to the file
 * @filename: the pointer to the name of the file to be created
 * Return: -1
 */
int create_file(const char *filename, char *text_content)
{
int lindo, take, hello = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (hello = 0; text_content[hello];)
hello++;
}
lindo = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
take = write(lindo, text_content, hello);
if (lindo == -1 || take == -1)
return (-1);
close(lindo);
return (1);
}
