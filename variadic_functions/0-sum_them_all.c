#include "variadic_functions.h"
/**
* sum_them_all - returns the sum of all its parameters
* @n: variable numbers of parameters passed
* Return: sum of all parameters, or 0 if it's 0
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list count;
	int sum = 0;
	unsigned int i;

	va_start(count, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(count, int);
	}
	va_end(count);

	return (sum);
}
