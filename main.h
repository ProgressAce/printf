#ifndef PRINTF
#define PRINTF

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int _putchar(char c);
int _printf(const char *format, ...);
int p_char(va_list c);
int p_integer(va_list i);
int p_string(va_list s);
int p_binary(va_list b);
int p_unsigned_int(va_list u);
int p_octal(va_list o);

/**
 * print_format - Struct print_format
 *
 * @spec: the string specifier char
 * @func: the function associated
 */

typedef struct print_format
{
	char *spec;
	int (*func)(va_list str_arg);
} print_f;

#endif /* #ifndef PRINTF */
