#include "main.h"

int print_exc_string(va_list list_args)
{
	char *str;
	int i, len = 0;
	int value;

	str = va_arg(list_args, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0 ; str[i] != '\0'; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len = len + 2;
			value = str[i];
			if (value < 16)
			{
				_putchar('0');
				len++;	
			}
			len = len + print_HEX_extra(value);
		}
		else
		{
			_putchar(str[i]);
			len++;
		}
	}
	return (len);



}
