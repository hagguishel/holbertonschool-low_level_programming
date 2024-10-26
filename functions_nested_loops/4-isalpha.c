#include "main.h"
/*
 * Fonction : _isalpha
 * Vérifie si le caractère passé en paramètre est une lettre de l'alphabet.
 * c : Le caractère à vérifier (sous forme d'un entier représentant la valeur ASCII).
 * Retourne : 1 si c est une lettre (minuscule ou majuscule), sinon 0.
 */
int _isalpha(int c)
{
int is_lower = (c >= 'a' && c <= 'z');
int is_upper = (c >= 'A' && c <= 'Z');    
if (is_lower || is_upper) 
{
return 1;
}
return 0;
}
