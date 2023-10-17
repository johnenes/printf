#include "main.h"
/**
 * print_pointer - prints pointer
 * @val: value
 * Return: int
 */


int print_pointer(va_list val)
{
	void *ptr;
	char *str = "(nil)";
	int i, b;
	long int a;


	ptr = va_arg(val, void *);

	if (ptr == NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
			_putchar(str[i]);
		return (i);


	}
	a = (unsigned long int)ptr;
	_putchar('0');
	_putchar('x');
	b =  print_hex_extra(a);
	return (b + 2);
}
