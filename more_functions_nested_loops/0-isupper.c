#include "main.h"

 /**
 *_isupper -Verifie si le caractere est en majuscule.
 *_isuper - Verifie si c est en majuscule
 *
 *@c est le carctere a tester.
 *Return: 1 si c est une majuscule, sinon 0.
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
