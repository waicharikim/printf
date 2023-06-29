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
	op_t spec_list[6] = {
		{"c", _printc},
		{"s", _prints},
		{"%", _printpc},
		{"d", _printd},
		{"i", _printd},
		{"b", _printb}};

		for (i = 0; i < 6; i++)
		{
			if (*(spec_list[i].op) == *c)
			{
				return (spec_list[i].f);

			}
		}
	return (NULL);
}
