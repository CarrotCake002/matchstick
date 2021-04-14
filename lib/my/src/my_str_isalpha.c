/*
** EPITECH PROJECT, 2020
** my_str_isalpha
** File description:
** checks if the string contains a number
*/

#include "stdbool.h"

bool my_str_isalpha(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if ((str[i] >= 'a' && str[i] <= 'z')
            || (str[i] >= 'A' && str[i] <= 'Z'))
            i++;
        else
            return (false);
    }
    return (true);
}
