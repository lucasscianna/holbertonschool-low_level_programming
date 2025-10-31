#include "main.h"
/**
* puts_half - Prints last half of string
* @str: String to half print
*
* Return: void
*/
void puts_half(char *str)
{
	char *ptr = str;
	int length = 0;

	while (*(ptr + length) != '\0')
	{
		length++;
	}

	ptr = ptr + (length + 1) / 2;

	while (*ptr != '\0')
	{
		_putchar(*ptr);
		ptr++;
	}
	_putchar('\n');
}
