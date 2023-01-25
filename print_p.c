#include <stdio.h>
#include <stdlib.h>
#include "main2.h"

/**
  * print_char - writes the character c to stdout
  * @c: The characters to be printed
  *Return: 1 on success
  */

int print_char(va_list c)
{
	unsigned char my_char;

	my_char = va_arg(c, int);
	_putchar(my_char);
	return (1);
}
/**
  * print_percentage - '%'
  * Return: 1 on success.
  */
int print_percentage(void)
{
	_putchar('%');
	return (1);
}
