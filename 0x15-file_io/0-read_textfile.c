#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
#include <fcntl.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX std output.
 * @filename : text file name.
 * @letters : the number of letters it should read and print.
 * Return: the actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *t;
ssize_t fd;
ssize_t wr;
ssize_t rd;
if (filename == NULL)
return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
t = malloc(letters * sizeof(char));
if (t == NULL)
return (0);
rd = read(fd, t, letters);
wr = write(STDOUT_FILENO, t, rd);
free(t);
close(fd);
return (wr);
}
