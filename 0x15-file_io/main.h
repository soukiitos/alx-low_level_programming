#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>

#define USAGE "Usage: cp file_from file_to\n"
#define ERROR_NREAD "Error: Can't read from file %s\n"
#define ERROR_NWRITE "Error: Can't write to %s\n"
#define ERROR_NCLOSE "Error: Can't close fd %d\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)
#define READ_BUFF_SIZE 1024
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int main(int ac, char **av);
#endif
