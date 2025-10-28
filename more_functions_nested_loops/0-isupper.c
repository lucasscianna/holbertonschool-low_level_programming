#include "main.h"

/* _isupper verifie si le caractere est en majuscule 
 * @c est le caractere a tester 
 *
 * return 0 si il est en maj sinon 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
  
