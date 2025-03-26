#include "main.h"
#include <stdarg.h>

/**
 * print_char - Prints a single character.
 * @args: The list of arguments from _printf.
 * Return: Number of characters printed (always 1).
 */
int print_char(va_list args)
{
char c = va_arg(args, int);
{return (_putchar(c)); }
}
