#include "main.h"

/**
 * get_op_func - selects the correct function to perfom
 * @fmt: format array
 * @j: index to check in array
 * @args: arguements
 * Return: pointer to the function that corresponds to the specifier
 */

int get_op_func(const char *fmt, int *j, va_list args)
{
	int i;

	op_t ops[] = {
		{"i", number},
		{"d", number},
		{"%", percent},
		{"c", character},
		{"s", string}
	};

	i = 0;
	while (ops[i].op)
	{
		if (fmt[*j] == *(ops[i].op))
			return (ops[i].f(args));
		i++;
	}

	return (0);
}