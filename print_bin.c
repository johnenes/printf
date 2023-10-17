#include "main.h"

/**
 * print_bin - converts to binary
 * @list_of_arg: argument
 * Return: integer
 */

int print_bin(va_list list_of_arg)
{
	int loop;
	int count = 0;
	unsigned int output = va_arg(list_of_arg, unsigned int);

	for ( loop = 31; loop >= 0; loop--)
	{
		int bit = (output >> loop) & 1;

		_putchar(bit + '0');
		count++;
	}
	if (count == 0)
	{
		count++;
		_putchar('0');
	}
	return (count);
}

