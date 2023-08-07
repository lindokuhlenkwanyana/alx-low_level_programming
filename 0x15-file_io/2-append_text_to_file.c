#include "main.h"

/**
 * append_text_to_file - will be appending the  text at the end of a
 * file.
 * @text_content: String to be  added to the end of the file.
 * @filename: The pointer to the name of the file.
 * Return: -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
int lindo, hello, take = 0;

if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (take = 0; text_content[take];)
take++;
}
lindo = open(filename, O_WRONLY | O_APPEND);
hello = write(lindo, text_content, take);
if (lindo == -1 || hello == -1)
return (-1);
close(lindo);
return (1);
}
