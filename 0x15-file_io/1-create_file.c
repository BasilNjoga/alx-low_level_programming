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
 * @text_content: this is the second parameter 
 * @Return: create_File 
 */

int create_file(const char *filename, char *text_content)
{
    int fd;
    int i;

    fd = open(filename, O_CREAT | O_WRONLY , 0600);
    while (text_content[i] != '\0')
    {
        write(fd, text_content[i], 1);
        i++;
    }

    return fd;
}