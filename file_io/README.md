# README - File Manipulation in C with System Calls

This guide explains how to use system calls in C to create, open, close, read, and write files. It also covers file descriptors, file permissions, and the distinction between functions and system calls.

## Table of Contents
- [Introduction](#introduction)
- [File Descriptors](#file-descriptors)
- [The Three Standard File Descriptors](#the-three-standard-file-descriptors)
- [System Calls](#system-calls)
- [Creating, Opening, Closing, Reading, and Writing Files](#creating-opening-closing-reading-and-writing-files)
- [File Permissions](#file-permissions)
- [Differences Between Function and System Call](#differences-between-function-and-system-call)

## Introduction

In C, files are managed using **file descriptors**, which are integers that represent open files. The system calls `open()`, `close()`, `read()`, and `write()` are used to manipulate files using these descriptors. These system calls are part of the kernel functions that allow a program to interact with the file system.

## File Descriptors

A **file descriptor** is an integer that the operating system assigns to every open file. It serves as an identifier for performing operations on the file, such as reading, writing, or closing it.

### The Three Standard File Descriptors

There are three standard file descriptors available to every C program upon execution:

- **STDIN_FILENO (0)**: The file descriptor for standard input (usually the keyboard).
- **STDOUT_FILENO (1)**: The file descriptor for standard output (usually the screen).
- **STDERR_FILENO (2)**: The file descriptor for standard error (usually the screen).

### System Calls

The following system calls are used for file manipulation in C:

1. **open()**: Opens a file.
2. **close()**: Closes a file.
3. **read()**: Reads data from a file.
4. **write()**: Writes data to a file.

## Creating, Opening, Closing, Reading, and Writing Files

### 1. Opening a File

The `open()` function is used to open a file and obtain a file descriptor. It takes the file path and a set of flags that specify how the file should be opened.

```c
#include <fcntl.h>  // for flags
#include <unistd.h> // for open, read, write, close

int fd = open("my_file.txt", O_RDONLY);
if (fd == -1) {
    perror("Error opening file");
    return 1;
}
