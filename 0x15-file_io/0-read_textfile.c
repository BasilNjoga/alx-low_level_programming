#include <stdio.h>
#include <stdlib.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <unistd.h>
#include "main.h"

/**
 * ssize_t = this is a function to read a file
 * 
 * @filename: this is the first paramert 
 * @letters: this is the second parameter 
 * @Return: ssize_t 
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
    int fd;
    char buf[letters + 1];

    fd = open(filename, O_RDONLY);
    if (fd == -1)
    {
        return (0);
    }
    read(fd, buf, letters);
    buf[letters] = '\0';

    return (0);

}