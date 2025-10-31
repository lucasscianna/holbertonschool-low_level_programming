#include "main.h"
/**
* _strlen - lenght of a string
* @s: string to check
* Return: lenght of @s
*/
int _strlen(char *s)
{
int count = 0;

for (; *s != '\0'; s++)
{
count++;
}
return (count);
}
