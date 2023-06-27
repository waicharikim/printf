#include "main.h"

/**
 * get_op_func - selects the correct function to perfom
 * @s: format specifier entered by user
 * Return: pointer to the function that corresponds to the specifier
 */

int get_op_func(const char *fmt, int *j, va_list args)
{
	int i;

	op_t ops[] = {
		{"%", percent},
		{"c", character},
		{"s", string}, 
		{NULL, NULL}
	};

	i = 0;
	while (ops[i].op)
	{
		if (fmt[*j] == ops[i].op) 
			ops[i].f(args);
		i++;
	}

	return (0);
}
