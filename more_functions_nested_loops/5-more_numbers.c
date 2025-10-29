#include "main.h"

/**
 *more_numbers - prints 10 times 0 to 9
 *
 *Return:numbers 
 *
 */

void more_numbers(void)
{
int count;
int i;

for (count = 0; count <= 9; count++)
{
for (i = 0; i <= 14; i++)
{
if (i > 9)
_putchar((i / 10) + '0');
_putchar((i % 10) + '0');
}
_putchar('\n');
}
}
