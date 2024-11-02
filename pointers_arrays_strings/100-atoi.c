#include "main.h"

int _atoi(char *s)
{
    int i = 0;
    int sign = 1;
    unsigned int result = 0;
    int has_number_started = 0;

    while (s[i] != '\0')
    {
        if (s[i] == '-' && !has_number_started)
        {
            sign *= -1;
        }
        else if (s[i] == '+' && !has_number_started)
        {
        }
        else if (s[i] >= '0' && s[i] <= '9')
        {
            has_number_started = 1;
            result = result * 10 + (s[i] - '0');
            if (result > 2147483648U && sign == -1)
            {
                return -2147483648; // Retourne INT_MIN
            }
            if (result > 2147483647 && sign == 1)
            {
                return -1; // Indique un débordement pour les positifs
            }
        }
        else if (has_number_started)
        {
            break;
        }
        i++;
    }
    return result * sign;
}

