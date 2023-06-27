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
		exit(99);
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
		exit(99);
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
		exit(99);
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
