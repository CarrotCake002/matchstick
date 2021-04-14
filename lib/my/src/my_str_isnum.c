/*
** EPITECH PROJECT, 2020
** my_str_isnum
** File description:
** checks if the given string is a number
*/

#include "stdbool.h"
#include "stdio.h"

bool my_str_isnum(char const *str)
{
    int i = 0;

    while (str[i] != '\n' && str[i] != '\0') {
        if ((str[i] >= '0') && (str[i] <= '9'))
            i++;
        else
            return (false);
    }
    return (true);
}
