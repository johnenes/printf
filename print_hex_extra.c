#include "main.h"

/**
 * print_hex_extra - custom conversion specifier:S
 * @num: list of argument
 * Return: count
 */

int print_hex_extra(unsigned long int num)
{
long int *array;
long int loop_count, track_hex_digit = 0;
unsigned long  int temp = num;

while (num / 16 != 0)
{
num =  num / 16;
track_hex_digit++;
}
track_hex_digit++;


array = malloc(sizeof(long  int) * track_hex_digit);
for (loop_count = 0; loop_count < track_hex_digit; loop_count++)
{
array[loop_count] = temp % 16;
temp = temp / 16;
}
for (loop_count = track_hex_digit - 1; loop_count >= 0; loop_count++)
{
if (array[loop_count] > 9)
array[loop_count] = array[loop_count] + 39;
_putchar(array[loop_count] + '0');
}
free(array);
return (loop_count);
}
