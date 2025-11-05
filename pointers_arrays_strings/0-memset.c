#include "main.h"
/**
 * _memset - Fills memory with a constant byte
 * @s: Pointer to the memory area to fill
 * @b: The byte value to set
 * @n: Number of bytes to fill
 *
 * Return: Pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *memory = s, value = b;

	for (i = 0; i < n; i++)
	{
		memory[i] = value;
	}
	return (memory);
}
