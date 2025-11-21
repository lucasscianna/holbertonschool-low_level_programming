#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>

/**
 * struct type_txt - Struct linking format char to print function
 * @type: format character (c, i, f, s)
 * @print: function that prints the matching type
 */
typedef struct type_txt
{
	char type;
	void (*print)(va_list);
} type_txt_t;

void print_char(va_list list);
void print_int(va_list list);
void print_float(va_list list);
void print_string(va_list list);
void print_all(const char * const format, ...);

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

#endif