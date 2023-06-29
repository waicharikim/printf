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
	int (*f)(va_list);
} op_t;

/* prototypes */
int _printf(const char *format, ...);
int (*get_op_func(char *s))(char *);
int (*spec_check(const char *))(va_list);
int _putchar(char c);
int _printc(va_list);
int _prints(va_list);
int _printpc(va_list);
int _printd(va_list);
int _printb(va_list);
#endif
