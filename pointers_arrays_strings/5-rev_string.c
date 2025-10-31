#include "main.h"

/**
 * rev_string - Reverse a string
 * @s: The string to reverse
 */

void rev_string(char *s)
{
int i, l = 0;
char tmp;

while (s[l] != '\0')
l++;
for (i = 0; i < l / 2; i++)
{
tmp = s[i];
s[i] = s[l - 1 - i];
s[l - 1 - i] = tmp;
}
}
