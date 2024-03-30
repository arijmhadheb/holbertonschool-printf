#include "main.h"
#include <stdarg.h>

/**
 * _printf - Prints anything
 * @format: The format string
 *
 * Return: The number of bytes printed
 */
int _printf(const char *format, ...)
{
    va_list args;                                    /* Var arguments list */
    int c = 0;                                   /* Init counter for chars printed */
    const char *p = format;                        /* Init pointer to format str */
    int (*func_p)(va_list) = NULL;                   /* Init function pointer to NULL */

    if (format == NULL)                              /* Check if format str is NULL */
        return (-1);

    va_start(args, format);                          /* Start var arguments list */

    while (*p)                                     /* Loop through format str */
    {
        if (*p != '%')                             /* If current char is not '%' */
        {
            _putchar(*p);                          /* Print the char */
            c++;                                 /* Increment char count */
        }
        else                                         /* If current char is '%' */
        {
            p++;                                   /* Move to next char */
            if (*p == '\0')                        /* If next char is NULL */
                return (-1);                         /* Return -1 */

            func_p = get_func(*p);                 /* Get function pointer for specifier */

            if (func_p != NULL)                      /* If valid function pointer found */
                c += func_p(args);               /* Call function and update count */
            else                                     /* If no valid function pointer found */
            {
                if (*p == 's')                     /* If specifier is 's' */
                    c += print_string(args);     /* Call print_string and update count */
                else if (*p == 'c')                /* If specifier is 'c' */
                    c += print_character(args);  /* Call print_character and update count */
                else if (*p == '%')                /* If specifier is '%' */
                    c += print_percent(args);    /* Call print_percent and update count */
                else if (*p == 'd' || *p == 'i') /* If specifier is 'd' or 'i' */
                    c += print_integer(args);    /* Call print_integer and update count */
                else                                 /* If unknown specifier */
                {
                    _putchar('%');                   /* Print '%' */
                    _putchar(*p);                  /* Print specifier char */
                    c += 2;                      /* Increment count by 2 */
                }
            }
        }
        p++;                                       /* Move to next char in format str */
    }

    va_end(args);                                    /* End */
    return (c);
}
