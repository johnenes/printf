#include "main.h"

/**
 * print_oct - convert octal
 * @list_arg: list of argument
 * Return: count
 */
int print_oct(va_list list_arg)
{
	int *array;
	int loop_count, track_oct_digit = 0;
	unsigned int num = va_arg(list_arg, unsigned int);
	unsigned int temp = num;

	while (num / 8 != 0)
	{
		num =  num / 8;
		track_oct_digit++;
	}
	track_oct_digit++;
	array = malloc(sizeof(int) * track_oct_digit);
	for (loop_count = 0; loop_count < track_oct_digit; loop_count++)
	{
		array[loop_count] = temp % 8;
		temp = temp / 8;
	}
	for (loop_count = track_oct_digit - 1; loop_count >= 0; loop_count--)
		_putchar(array[loop_count] + '0');
	free(array);
	return (loop_count);
}
