/*
** EPITECH PROJECT, 2020
** my_str_isupper
** File description:
** checks if the string is uppercase
*/

#include "stdbool.h"

bool my_str_isupper(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if ((str[i] >= 'A') && (str[i] <= 'Z'))
            i++;
        else
            return (false);
    }
    return (true);
}
