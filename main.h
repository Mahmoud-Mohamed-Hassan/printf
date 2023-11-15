#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
int _putchar(char x);
int print_char(va_list v);
int print_string(va_list v);
int print_numbers_i(va_list v);
int print_numbers_d(va_list v);
int _printf(const char *format, ...);

#endif
