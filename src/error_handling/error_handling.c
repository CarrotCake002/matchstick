/*
** EPITECH PROJECT, 2021
** error_handling.c
** File description:
** file to call functions to check errors
*/

#include "matchstick.h"

bool check_arguments(char **av)
{
    if (my_str_isnum(av[1]) != true || my_str_isnum(av[2]) != true
        || my_getnbr(av[1]) < 2 || my_getnbr(av[1]) > 99
        || my_getnbr(av[2]) < 1)
        return (false);
    return (true);
}

int error_handling(int ac, char **av)
{
    if (ac != 3)
        return (ERROR);
    if (check_arguments(av) != true)
        return (ERROR);
    return (CONTINUE);
}