#include "main.h"

/**
 * percent - prints perent
 * @type: format specify to check
 * Return: 0
 */

int percent(va_list type)
{
	char s;

	s = va_arg(type, int);

	if (!s)
	{
		return (-1);
	}
	else
		_putchar(37);
	return (0);
}

/**
 * character - prints character
 * @type: mem address to print
 * Return: 0
 */

int character(va_list type)
{
	char c;

	c = va_arg(type, int);

	if (!c)
	{
		return (-1);
	}
	else
		_putchar(c);

	return (0);
}

/**
 * string - prints string
 * @type: string litteral to print
 * Return: 0
 */

int string(va_list type)
{
	int i;
	char *s;

	s = va_arg(type, char *);

	if (!s)
	{
		return (write(1, "(null)", 6));
	}
	else
	{
		i = 0;

		while (s[i])
		{
			_putchar(s[i]);
			i++;
		}
	}
	return (0);
}

/**
 * number - prints numbers
 * @type: numbers to evaluate and print
 * Return: 0 0r -1
 */

int number(va_list type)
{
	long int num;

	num = va_arg(type, long int);

	if (!num)
		return (-1);

	if (num == 0)
		_putchar(0 + '0');
	else if (num > 0)
	{
		while (num > 0)
		{
		 	_putchar((num % 10) + '0');
			num = num / 10;
		}
	}
	else if (num < 0)
	{
		while (num < 0)
		{
			_putchar('A');
			num = 1;
		}
	}

	return (0);
}
