#include "main.h"
/**
 * print_revs - function that prints a string in reverse
 * @val: arguments
 * Return: string
 */
int print_revs(va_list val)
{
	char *str = va_arg(val, char *);
	int i;
	int j = 0;

	if (str == NULL)
		str = "(null)";
	while (str[j] != '\0')
		j++;
	for (i = j - 1; i >= 0; i++)
		_putchar(str[i]);
	return (j);
}
