*This project has been created as part of the 42 curriculum by szaidan.*

# Libft

## Description
Libft is a project from the 42 curriculum. The goal is to create my own C library by implementing functions from the standard C library and some additional functions.

This project helped me understand how strings, memory allocation, pointers, and linked lists work in C. The library can be reused in other C projects.

## Instructions

To compile the library, run:

`make`

The Makefile creates the `libft.a` library file.

Other available commands:

make clean: Removes the object files.
make fclean: Removes the object files and the library file.
make re: Cleans the project and recompiles the library.

To use the library in another C project, include `libft.h` and link the library when compiling.

## Library Description

### Character Functions

ft_isalpha: Checks if a character is a letter.<br>
ft_isdigit: Checks if a character is a digit.<br>
ft_isalnum: Checks if a character is a letter or a digit.<br>
ft_isascii: Checks if a character belongs to the ASCII character set.<br>
ft_isprint: Checks if a character is printable.<br>
ft_toupper: Converts a lowercase letter to uppercase.<br>
ft_tolower: Converts an uppercase letter to lowercase.

### String Functions

ft_strlen: Returns the length of a string.<br>
ft_strchr: Finds the first occurrence of a character in a string.<br>
ft_strrchr: Finds the last occurrence of a character in a string.<br>
ft_strncmp: Compares two strings up to a given number of characters.<br>
ft_strlcpy: Copies a string into a destination buffer with a size limit.<br>
ft_strlcat: Appends a string to a destination buffer with a size limit.<br>
ft_strnstr: Searches for a substring within a string.<br>
ft_strdup: Creates a duplicate of a string.<br>
ft_substr: Creates a substring from a given string.<br>
ft_strjoin: Joins two strings into a new string.<br>
ft_strtrim: Removes specified characters from the beginning and end of a string.<br>
ft_split: Splits a string into an array of strings using a delimiter.<br>
ft_itoa: Converts an integer into a string.<br>
ft_strmapi: Applies a function to each character and creates a new string.<br>
ft_striteri: Applies a function to each character using its index.

### Memory Functions

ft_memset: Fills a memory area with a specified byte.<br>
ft_bzero: Sets a memory area to zero.<br>
ft_memcpy: Copies bytes from one memory area to another.<br>
ft_memmove: Copies bytes safely when memory areas overlap.<br>
ft_memchr: Searches for a byte in a memory area.<br>
ft_memcmp: Compares two memory areas.<br>
ft_calloc: Allocates memory and initializes it to zero.

### Conversion Functions

ft_atoi: Converts a string into an integer.

### File Descriptor Functions

ft_putchar_fd: Writes a character to a file descriptor.<br>
ft_putstr_fd: Writes a string to a file descriptor.<br>
ft_putendl_fd: Writes a string followed by a newline.<br>
ft_putnbr_fd: Writes an integer to a file descriptor.

### Linked List Functions

The linked list functions use the `t_list` structure, which contains a pointer to the node's content and a pointer to the next node.

ft_lstnew: Creates a new list node.<br>
ft_lstadd_front: Adds a node at the beginning of a list.<br>
ft_lstadd_back: Adds a node at the end of a list.<br>
ft_lstsize: Counts the nodes in a list.<br>
ft_lstlast: Returns the last node in a list.<br>
ft_lstdelone: Deletes one node.<br>
ft_lstclear: Deletes all nodes in a list.<br>
ft_lstiter: Applies a function to each node's content.<br>
ft_lstmap: Creates a new list by applying a function to each node's content.

## Resources

I used the manual pages (`man`), Google, GeeksforGeeks, W3Schools, and Makefile Tutorial to understand the functions and their behavior.

I also used AI to help explain C concepts, understand errors, and review my implementation while working on the project. I tested and modified the code myself to understand how the functions work.
