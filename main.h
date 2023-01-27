#ifndef PRINTF
#define PRINTF
#define UINT_MAX 4294967295

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int _putchar(char c);
int _printf(const char *format, ...);
int p_char(va_list c);
int p_decimal(va_list d);
int p_string(va_list s);
int p_binary(va_list b);
int p_unsigned_int(va_list u);
int p_octal(va_list o);
int p_x(va_list x);
int p_X(va_list X);

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list c);
int print_string(va_list s);
int d(va_list i);
int print_dec(va_list d);
int print_bin(va_list b);
int print_unsig(va_list u);
int print_octal(va_list o);
int print_x(va_list x);
int print_X(va_list X);
int print_rot13(va_list R);
int get_flags(const char *format, int i*);

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
