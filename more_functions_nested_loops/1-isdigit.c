#include "main.h"

/**
 *_isdigit - Verifie si il y a un chiffre de 0 a 9
 *@c: est la varible a verifier
 *Return: 1 si c est un chiffre sinon 0
 */

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
