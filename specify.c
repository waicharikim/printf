#include "main.h"

/**
 * percent - prints perent
 * @s: format specify to check
 */

void percent(char *s)
{
	if (!s)
		write(2, Error, 5);
	else if (s == '%')
		_putchar(37);
	return;
}

/**
 * character - prints character
 * @c: mem address to print
 */

void character(char *c)
{
	if (*(c + 1) != NULL || !c)
		write(2, Error, 5);
	else
		_putchar(c);

	return;
}

/**
 * string - prints string
 * @s: string litteral to print
 */

void string(char *s)
{
	int i;

	if (!s)
		write(2, Error, 5);
	else
	{
		i = 0;
		while (s[i])
		{
			_putchar(s[i]);
			i++;
		}
	}
	return;
}

