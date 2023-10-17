#include "main.h"
#include <stdio.h>
/**
 * _strlen  - Return the length of a string
 * @str: string pointer
 *
 * Return: 1
 */

int _strlen(char *str)
{

int length = 0;

while (str[length] != '\0')
{
length++;
}
return (length);
}

/**
 * _strlenc - strlen function applying to constant char pointer
 * @str: char pointer
 * Return: (i);
 */


int _strlenc(const char *str)
{
int length = 0;

while (str[length] != '\0')
{
length++;
}
return (length);

}
