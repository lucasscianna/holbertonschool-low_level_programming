#include "main.h"

/**
 *print_number-Affiche les chiffres de 0 a 9
 *
 *Return: 0
 */



void print_numbers(void)
{
char c;
for (c = '0'; c <= '9'; c++)
{
_putchar(c);
}
_putchar('\n');
}
