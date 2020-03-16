#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char op;
	int (*f)();
} argum;

int _printf(const char *format, ...);
int print_func(const char *format, argum fm[], va_list formato);
int _putchar(char c);
int print_c(va_list formato);
int print_s(va_list formato);
int print_p(void);

#endif
