*This project was created as part of the 42 curriculum by abarrio.*

Description

The goal of this project is to implement the function get_next_line, which reads and returns a line from a file descriptor each time it is called. This project focuses on understanding static variables, file reading, and proper memory management in C.

Instructions

Compilation:
cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c

The BUFFER_SIZE value can be changed during evaluation by using the flag -D BUFFER_SIZE= (Although it's defined as 42 by default in the get_next_line.h library in case the flag is not used in the compilation).

Usage:
get_next_line returns a line ending with '\n' if there is one. If the end of file is reached or an error occurs, it returns NULL. The function works with files and standard input.

Algorithm

The implementation uses a static variable to keep the remaining data between calls. The function reads a BUFFER_SIZE amount of bytes from the file descriptor until a newline ('\n') or EOF ('\0') is found. The line is extracted and returned, and the rest of the buffer is saved for the next call. This allows reading the file line by line without reading more than necessary.

Resources

- read(2) manual
- 42 get_next_line subject
- GitHub repositories from other 42 students to compare general ideas and approaches

Use of AI

AI was used mainly as a learning tool, like a teacher, to solve specific doubts about static variables, memory handling, and general logic. GitHub was also used to look at other implementations to get a better overall idea.