#include "main.h"
#include <stdarg.h>


/**
 * _prints - print a character
 * @args: variadic parameter
 *
 * Return: output count
 */
int _printpc(__attribute__ ((unused)) va_list args)
{
	int count;

	count = 0;
	_putchar(37);
	count++;
	return(count);
}
