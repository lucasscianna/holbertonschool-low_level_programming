#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
char lettre;

for (lettre = 'a'; lettre <= 'z'; lettre++)
{
if (lettre != 'e' && lettre != 'q')
putchar(lettre);
}

putchar('\n');

return (0);
}
