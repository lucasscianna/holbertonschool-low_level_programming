#include <stdio.h>
#include <stdarg.h>
/**
* print_strings - Prints strings with new line.
* @separator: String of separator between each strings.
* @n: Number of strings passed
* Description: This function prints each string received as a variadic
* argument. If a string is NULL, it prints (nil). The separator is printed
* between strings when not NULL. A final newline is printed at the end.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list list;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(list);

	printf("\n");
}
