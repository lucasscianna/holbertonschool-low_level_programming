#include "variadic_functions.h"
/**
* print_numbers - Prints numbers separated by a string.
* @separator: String to print between integers.
* @n: Number of integers passed.
*
* Description: Prints numbers separated by a string.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num = 0;
	va_list count;

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
