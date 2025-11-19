#include <stdarg.h>
#include <stdio.h>
/**
* print_numbers - prints numbers separated by a string
* @separator: string to print between integers
* @n: number of integers passed
* Return: Nothing
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, num = 0;
	va_list count;

	if (n == 0)
		printf("\n");

	va_start(count, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(count, int);
		printf("%d", num);
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(count);
}