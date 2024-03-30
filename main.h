#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/* Function prototypes */
int _printf(const char *format, ...);
int print_string(va_list args);
int print_character(va_list args);
int print_percent(va_list args);
int (*get_func(char format))(va_list);
int _putchar(char c);
int handle_format(const char *format, va_list args);
int print_integer(va_list args);
int print_number(int n);

/**
 * struct fmt - struct declaration.
 * @str: format specifier.
 * @p: pointer to function.
 */
typedef struct fmt
{
char str;
int (*p)(va_list);
} f;

#endif /* MAIN_H */
