#include <unistd.h>

/**
*_puchar - writes the character c to stdout  
*@c: the character to return
*
*Return: O if its good , 1 if its error
*/

int _putchar(char c)
{
    return(write(1, &c, 1));
}