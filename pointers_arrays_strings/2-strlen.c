#include "main.h"
/**
 * _strlen - Renvoie la longueur d'une chaîne de caractère
 * @s: Pointeur vers la chaîne à mesure
 * Cette fonction parcourt la chaîne jusqu'à atteindre
 * le caractère nul pour compter le nombre de caractère
 * Return: La longueur de la chaîne
 */
int _strlen(char *s)
{
int count = 0;
while (s[count] != '\0')
{
count++;
}
return count;
} 
