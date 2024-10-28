#include "main.h"

int _isupper(int c)
{
int issuper;
for (issuper = 'A'; issuper <= 'Z'; issuper++)
{
if (issuper == c)
return (1);
}
return (0);
}
