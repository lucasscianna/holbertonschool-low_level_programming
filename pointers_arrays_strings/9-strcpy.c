#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
* _strcpy - Copy a string
* @dest: Destination de la string
* @src: Source de la string
* Return: La string
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i = i + 1;
	}
	dest[i] = '\0';
	return (dest);
}
