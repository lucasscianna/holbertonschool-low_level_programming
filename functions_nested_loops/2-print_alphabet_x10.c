#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10 times,
 * followed by a new line
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int count;
	char letter;

	for (count = 0; count < 10; count++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
