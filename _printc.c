#include "main.h"
#include <stdarg.h>


/**
 * _printc - print a character
 * @args: variadic parameter
 *
 * Return: output count
 */
int _printc(va_list arg)
{
	char c;
	int count;

	count = 0;
	c = va_arg(arg, int);
	if (c)
	{
		_putchar(c);
		return(count++);
	}
	return (0);
}
