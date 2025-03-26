#include "main.h"
#include <stdarg.h>

/**
 * print_string - Prints a string.
 * @args: The list of arguments from _printf.
 * Return: Number of characters printed.
 */
int print_string(va_list args)
{
char *str = va_arg(args, char *);
int count = 0;

if (!str)
str = "(null)";

while (*str)
{
_putchar(*str);
str++;
count++;
}

{return (count); }
}
