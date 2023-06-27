#include "main.h"
#include <stdarg.h>


/**
 * _prints - print a character
 * @arg: variadic list
 *
 * Return: output count
 */
int _prints(va_list arg)
{
	char *str;
	int count;

	count = 0;

	str = va_arg(arg, char *);
	while (str)
	{
		_putchar(*str);
		count++;
		str = va_arg(arg, char *);
	}
		return (count);
}
