#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

/**
 * printf_char - prints a char
 * @val: argument
 * Return: 1
 */

int printf_char(va_list val)
{
char str;
str = va_arg(val, int);
putchar(str);
return (1);


}


