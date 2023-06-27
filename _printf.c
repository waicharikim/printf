#include "main.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * _printf - print output according to a format
 * @format: pointer to string to print and check for format specifier
 *
 * Return: number of characters printed excluding null byte
 */
int _printf(const char *format, ...)
{
	int count;
	int i;
	va_list arg;
	const char *str;
	int len;

	i = 0;
	count = 0;

	for (len = 0, str = format; *str; str++, len++)
		;
	while (format[i]) /* iterate through the
			     string format while format != NULL */
	{
		if (format[i] != 37 && format[i] != 92)
		{
			_putchar(format[i]);
			count++; /*counts printed output*/
			i++;
			continue;
		}
		if (format[i] == 37) /*check for %*/
		{
			_putchar(format[i]);
			count++;
			i++;/*check_spec(format[i + 1], char *)*/
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
