# get_next_line

**get_next_line** is a C function that reads a line from a file descriptor, one line at a time, including the newline character (`\n`).  
This project is part of the **42 School curriculum** and focuses on file descriptors, static variables, memory management, and buffered reading.

---

## 📌 Project Description

The goal of this project is to implement the function:

```c
char *get_next_line(int fd);
Each call to get_next_line() returns the next line read from the file descriptor fd.
A line is defined as a sequence of characters ending with a newline character (\n), or the end of file.

If there is nothing more to read or an error occurs, the function returns NULL.

**Function Behavior**

Reads from a given file descriptor

Returns one line per function call

Includes the newline character (\n) if it exists

Handles files with or without a trailing newline

Works correctly with different BUFFER_SIZE values

Uses a static variable to store remaining data between calls

Bonus version supports multiple file descriptors simultaneously

**Allowed Functions**

read

malloc

free

No other library functions are allowed.

**Project Files**
get_next_line/
├── get_next_line.c
├── get_next_line_utils.c
├── get_next_line.h
├── get_next_line_bonus.c
├── get_next_line_utils_bonus.c
└── README.md

**BUFFER_SIZE**

The size of the reading buffer is defined by the BUFFER_SIZE macro and can be set at compile time:

gcc -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c


The function must work correctly with any positive value of BUFFER_SIZE.

**Bonus Part**

The bonus implementation allows:

Reading from multiple file descriptors at the same time

Independent static storage for each file descriptor

Implementation Overview

The function works as follows:

Read data from the file descriptor into a temporary buffer

Append the read data to a static storage string

Check if a complete line is available

Extract and return the next line

Store any remaining data for the next function call

Special care is taken to manage memory correctly and avoid leaks.

Usage Example
#include <fcntl.h>
#include <stdio.h>
#include "get_next_line.h"

int main(void)
{
    int fd;
    char *line;

    fd = open("test.txt", O_RDONLY);
    while ((line = get_next_line(fd)) != NULL)
    {
        printf("%s", line);
        free(line);
    }
    close(fd);
    return (0);
}

**Error Handling**

The function returns NULL in the following cases:

Invalid file descriptor

BUFFER_SIZE is less than or equal to 0

A read error occurs

End of file is reached and no data remains

Learning Objectives

This project helps develop:

A solid understanding of file descriptors

Proper use of static variables in C

Efficient buffered reading

Safe dynamic memory allocation and deallocation

Writing clean, norm-compliant C code

Project Context

This project is part of the 42 Network curriculum and follows:

The 42 Norm

Strict memory management rules

Mandatory use of allowed functions only

**Author**

Lusine Atshemyan
42 Yerevan

License

This project is for educational purposes only.
