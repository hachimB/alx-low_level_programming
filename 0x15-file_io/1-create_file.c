#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
#include <fcntl.h>
/**
 * create_file - creates a file.
 * @filename : name of the file to create.
 * @text_content : a NULL terminated string to write to the file
 * Return: Always 0.
 */
int create_file(const char *filename, char *text_content)
{
int fd;
int wr;
int i = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
while (text_content[i])
i++;
}
fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
if (fd == -1)
return (-1);
write(fd, text_content, i);
if (wr == -1)
return (-1);
close(fd);
return (1);
}
