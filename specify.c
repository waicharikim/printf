#include "main.h"

/**
 * percent - prints perent
 * @s: format specify to check
 */

void percent(char *s)
{
	if (!s)
	{
		exit(99);
	}
	else if (*s == 37)
		_putchar(37);
	return;
}

/**
 * character - prints character
 * @c: mem address to print
 */

void character(char *c)
{
	if (!c)
	{
		exit(99);
	}
	else
		_putchar(*c);

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
	return;
}

