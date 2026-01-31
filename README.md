*This project has been created as part of the 42 curriculum by mawattie.*

# Description :

The goal of this project is to implement a function that reads a file line by line from a file descriptor.
The function called `get_next_line`, returns a single line at each call, including the newline character `\n` if it is present. 
The remaining data is stored and reused for subsequent calls, allowing the file to be read progressively.
The project introduces the use of **static variables** in C, and the read function.

# Instructions :

- To use `get_next_line` simply compile it with a buffer size defined at compilation time.

# Ressources :

- Linux man pages for read https://linux.die.net/man/3/read
- Explanative videos https://www.youtube.com/watch?v=-Mt2FdJjVno

AI was used to better understand certain concepts and behaviors that the function should have.

# Implementation Details :

The function works in three main steps :
- Reading and buffering
- Line extraction
- State preservation