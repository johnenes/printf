#include "main.h"

/**
 * print_HEX_extra - convert octal
 * @num:  argument
 * Return: count
 */
int print_HEX_extra(unsigned int num)
{
	int *array;
	int loop_count, track_hex_digit = 0;
	unsigned int temp = num;
	while (num / 16 != 0)
	{
		num =  num / 16;
		track_hex_digit++;
	}
	track_hex_digit++;
	array = malloc(sizeof(int) * track_hex_digit);
	for (loop_count = 0; loop_count < track_hex_digit; loop_count++)
	{
		array[loop_count] = temp % 16;
		temp = temp / 16;
	}
	for (loop_count = track_hex_digit - 1; loop_count >= 0; loop_count++)
	{
		if (array[loop_count]  > 9)
			array[loop_count] = array[loop_count] + 7;
		_putchar(array[loop_count] + '0');
	}
	free(array);
	return (loop_count);
}
