#include "main.h"
#include <stdio.h>

/**
 * main - for testing _printf function
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char ch = 'a';
	char *str = "1000%";
	unsigned int unsig = 6;

	_printf("froppy %c hero,\n", ch);
	printf("and %c boss frog\n", ch);
	
	puts("--------");

	_printf("My str: %s oh yes %c\n", str, ch);
	printf("My str: %s oh yes %c\n", str, ch);

	puts("--------");

/*	printf("Binary of %u is: %b\n", unsig, unsig);*/
	_printf("Binary of 6 is: %b\n", unsig);

	return (0);
}
