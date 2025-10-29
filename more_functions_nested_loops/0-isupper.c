#include "main.h"

 /**
 * _isupper -Verifie si le caractere est en majuscule.
 * Description: cette fonction verifie si c est en majuscule
 *
 *
 *Return: 1 si c est une majuscule, sinon 0.
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
