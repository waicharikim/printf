#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");

	_printf("character [c] = %s\n", NULL);
	printf("character [c] = %s\n", NULL);

	_printf("\t%d\n", 2);
	printf("\t%d\n", -2);

	printf("\n%d\t%d\n", len, len2);

	_printf("%c\n", 'H');

	return (0);	
}
