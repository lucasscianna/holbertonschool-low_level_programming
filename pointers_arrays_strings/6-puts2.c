#include "main.h"
/**
* puts2 - Prints every other char
* @str: String to cut
*
* Return: void
*/
void puts2(char *str)
{
char *ptr = str;
int toggle = 1;

while (*ptr != '\0')
{
if (toggle)
_putchar(*ptr);
toggle = !toggle;
ptr++;
}
_putchar('\n');
}
