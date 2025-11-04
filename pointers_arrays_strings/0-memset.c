#include "main.h"
#include <stdio.h>

**
 * _memset - Fills memory with constant byte
 * @s : String
 * @b : String too add dest
 * @n : dffs
 * Return : Memory dest
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
char *memory = s, value = b;
for (i = 0 ; i < n, i++)
{
memory[i] = value;
}
return (memory);
}
