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

int append_text_to_file(const char *filename, char *text_content)
{
    int fd;

    fd = open(filename, O_WRONLY , 0600);

    if (fd == -1)
{
    return -1;
}

}