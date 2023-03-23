#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

/*
 * struct print - Defines a printer.
 * @d_type: The data type.
 * @func: The function pointer to a function that prints @d_type.
 */

typedef struct print
{
	char *d_type;
	void (*func)(va_list arg);
} print_t;

int _putchar(char);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
