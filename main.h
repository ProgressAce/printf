#ifndef PRINTF
#define PRINTF

#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
void p_char(va_list c);
void p_string(va_list s);

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
