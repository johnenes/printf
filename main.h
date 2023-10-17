
#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h> 
typedef struct format
{
	char *id;
	int (*f)();
}match;




int _putchar(char c);
int printf_string(va_list val);
int _printf(const char *format, ...);
int _strlen(char *str);
int _strlenc(const char *str);
int printf_char(va_list val);
int print_37(void);
int print_int(va_list args);
int print_dec(va_list args);
int print_bin(va_list list_of_arg);
int print_unsigned(va_list args);
int print_hex(va_list list_arg);
int print_HEX(va_list list_arg);
int print_HEX_extra(unsigned int num);
int print_pointer(va_list val);
int print_hex_extra(unsigned long int list_arg);
int print_revs(va_list val);
int print_rot13(va_list val);
int print_oct(va_list list_arg);
int print_exc_string(va_list list_args);

#endif
