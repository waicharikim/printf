#include "main.h"

/**
 * _printf - a similar function to printf
 * @format: first arguement
 * Return: Length of first arguement
 */

int _printf(const char *format, ...)
{
	int i, count = 0;
	/*int (*func)(char *);
	va_list args;

	va_start(args, format);*/

	if (!format)
	{
		return (strlen(format));
	}

	i = 0;
	while (format[i])
	{
		if (format[i] == 37)
		{
			if (format[i - 1] == 92)
			{
				_putchar(37);
				continue;
			}
			if (format[i + 1] == 37)
			{
				_putchar(37);
				i += 2;
				continue;
			}
			/*else
			{
				i += 1;
				func = get_op_func(format[i]);

				if(!func)
				{
					write(2, Error, 5);
					exit(99);
				}
				func(va_arg(args, char *));
				printf("%c\n" va_arg(args, char));
			}*/
		}
		_putchar(format[i]);
		i++;
	}
	/*va_end(args);*/

	return (strlen(format));
}
