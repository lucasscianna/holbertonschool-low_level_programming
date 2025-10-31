#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
* _atoi - Convert a string to an integer
* @s: String to convert
*
* Return: An integer
*/
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	unsigned int result = 0;
	int start = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign = sign * -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			start = 1;
			result = result * 10 + (s[i] - '0');
		}
		else if (start)
		break;
		i++;
	}
	return (result * sign);
}
