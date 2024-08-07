#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if it fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd, write_res, length = 0;

if (filename == NULL)
{
return (-1);
}
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
{
return (-1);
}
if (text_content != NULL)
{
while (text_content[length])
{
length++;
}
write_res = write(fd, text_content, length);
if (write_res == -1)
{
close(fd);
return (-1);
}
}
close(fd);

return (1);

}
