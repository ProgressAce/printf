#include "main2.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * print_string - writes the character c to stdout
  * @s: string to be printed
  * Return: 1 as success
  */

int print_string(va_list s)
{
	char *my_string;
	int i = 0;

	my_string = va_arg(s, char *);
	if (my_string == NULL)
		my_string = "(null)";
	while (my_string[i])
	{
		_putchar(my_string[i]);
		i++;
	}
	return (i);
}
