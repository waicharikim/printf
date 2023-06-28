#ifndef HEADER_FILE
#define HEADER_FILE

/* C Libraries */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>

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
int percent(va_list type);
int number(va_list type);
int intiger(va_list type);
int character(va_list type);
int string(va_list type);
int get_op_func(const char *, int *, va_list args);
int _putchar(char c);

#endif
