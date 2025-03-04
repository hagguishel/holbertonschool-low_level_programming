#include "main.h"

char *_strstr(char *haystack, char *needle)
{
    int b1, b2;

    for (b1 = 0; haystack[b1] != '\0'; b1++)
    {
        for (b2 = 0; needle[b2] != '\0'; b2++)
        {
            if (haystack[b1 + b2] != needle[b2])
            break;
        }
        if (needle[b2] == '\0')
        {
            return (haystack + b1);
        }
    }
    return (NULL); 
}