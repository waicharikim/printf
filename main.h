#ifndef HEADER_FILE
#define HEADER_FILE

/* C Libraries */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

/** Struct **/
/**
 * struct op - struct op
 * @op: the specifier
 * @f: function associated
 */
typedef struct op
{
	char *op;
	void (*f)(char);
}op_t;

/* prototypes */
int _printf(const char *format, ...);
void percent(char *s);
void character(char *c);
void string(char *s);
int (*get_op_func(char *s))(char *);
int _putchar(char c);

#endif
