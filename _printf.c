#include "main.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * _printf - print output according to a format
 * @format: pointer to string to print and check for format specifier
 *
 * Return: number of characters printed excluding null byte
 */
int (*spec_check(const char *))(va_list);

int _printf(const char *format, ...)
{
	int count; /*count printed output*/
	int i;
	int len;
	const char *str;
	va_list arg;
	int (*spec_fun)(va_list);

	va_start(arg, format);

	i = 0;
	count = 0;

	for (len = 0, str = format; *str; str++, len++)
		;
	while (format[i]) /* iterate through the
			     string format while format != NULL */
	{
		if (format[i] != 37 && format[i] != 92)/* only print if != '\' or '%'*/
		{
			_putchar(format[i]);
			count++;
			i++;
			continue;
		}
		if (format[i] == 37) /*check for %*/
		{
			spec_fun = spec_check(&format[i + 1]);
			if (spec_fun)
			{
				spec_fun(arg);
			}

			count++;
			i++;
			continue;
		}
		else
			if (format[i] == 92)
			{
				if (format[i + 1] == 37)
				{
					_putchar(format[i]);
					count ++;
					i++;
					continue;
				}
				else
				{
					putchar(format[i]);
					count++;
					i++;
					continue;
				}
				/*handle escape characters*/
			}
	}
//	str = va_arg(arg, char *);
		/*check_spec(format[i + 1], str);*/
//	printf("%s", str);
//	va_end(arg);
		printf("%d", len);
		printf("%d", count);
		return (count);
}
