#include "main.h"


/**
 * spec_check - checks for format specifier
 * @c: characterto check
 *
 * Return: pointer to function that matches the format specifier

 */

int (*spec_check(const char *c))(va_list)
{
	int i;
	op_t spec_list[3] = {
		{"c", _printc},
		{"s", _prints},
		{"%", _printpc}};

		for (i = 0; i < 3; i++)
		{
			if (spec_list[i].op == c)
			{
				return (*(spec_list[i].f));

			}
		}
	return(NULL);
}
