# C - printf

This project provides a customized version of the printf function in C. It supports basic formatting specifiers such as %d, %f, %s, etc., and handles variadic arguments for flexibility.
## Authors

- [@arijmhadheb](https://github.com/arijmhadheb)


## FAQ

#### Task 1:

Write a function that produces output according to a format.

Prototype: int _printf(const char *format, ...);
Returns: the number of characters printed (excluding the null byte used to end output to strings)
write output to stdout, the standard output stream
format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
c
s
%
You don’t have to reproduce the buffer handling of the C library printf function
You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers

#### Task 2:

Handle the following conversion specifiers:

d
i
You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers

#### Task 3:

Create a man page for your function.
## Documentation

[Documentation](https://s3.eu-west-3.amazonaws.com/hbtn.intranet/uploads/misc/2022/11/d38f88e96a617135804dca9f9c49632751e06aa7.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIA4MYA5JM5DUTZGMZG%2F20240327%2Feu-west-3%2Fs3%2Faws4_request&X-Amz-Date=20240327T112244Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=ed220b39cbdf76d9f48b08255e6dc04208f2c4ab4ad9afaa1d21372f23fad912)


## API Reference

#### Files used :



| File Name :         | Description :                |
| :------------------ | :------------------------- |
| `main.c`            | Contains the main function to test the _printf function with various format specifiers. |
| `a_printf.c`        | Contains the implementation of the _printf function. |
| `_putchar.c`        | Contains the _putchar function used by _printf to print characters. |
| `get_func.c`        | Contains the get_func function used by _printf to select the appropriate printing function for each format specifier. |
| `Main.h`            | Declaration |
| `print_functions.c` | Contains the printing functions for %c, %s, and %% conversions. |

## Supported Conversion Specifiers:

|     Specifiers :     |         Description :        |
| ------------- | --------------------- |
| %c | Prints a single character.|
| %s | Prints a null-terminated string.|
| %% | Prints a percent sign.|



## Flowchart

![Logo](https://i.postimg.cc/zf2L0mJ7/untitled.png)