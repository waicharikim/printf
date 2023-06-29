#include "main.h"

/**
 * get_op_func - selects the correct function to perfom
 * @s: format specifier entered by user
 * Return: pointer to the function that corresponds to the specifier
 */

int get_op_func(char *s)(char *)
{
	op_t ops[] = {
		{"%", percent},
		{"c", character},
		{"s", string}, 
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op, s)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
