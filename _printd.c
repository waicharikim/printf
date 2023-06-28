#include "main.h"
#include <stdarg.h>


/**
 * _printd - print a character
 * @args: variadic parameter
 *
 * Return: output count
 */
int _printd(va_list arg)
{
	long int n;
	int count;

	count = 0;
	n = va_arg(arg, long int);
	if (n < 0)
        {
                _putchar('-');
		count++;
                n = n * -1;
                _putchar((n / 10) + 48);
		count++;
                _putchar((n % 10) + 48);
		count++;
		return (count);
        }
        else if (n == 0)
	{
		_putchar('0');
		count++;
	}

        else if (n > 0 && n < 10)
	{
                _putchar(n + 48);
		count++;
	}
        else if (n > 9 && n < 100)
        {
                _putchar((n / 10) + 48);
                _putchar((n % 10) + 48);
		count += 2;
        }
        else if (n > 99 && n < 1000)
        {
                _putchar((n / 100) + 48);
                _putchar(((n % 100) / 10) + 48);
                _putchar(((n % 100) % 10) + 48);
		count += 3;
        }

        else
        {
                _putchar((n / 1000) + 48);
                _putchar(((n / 100) % 10) + 48);
                _putchar(((n % 100) / 10) + 48);
                _putchar(((n % 100) % 10) + 48);
		count += 4;
        }
	return(count);
}
