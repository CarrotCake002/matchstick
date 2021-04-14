/*
** EPITECH PROJECT, 2021
** matchstick.c
** File description:
** matchstick function
*/

#include "matchstick.h"

int matchstick(int ac, char **av)
{
    matchstick_t *matchstick = NULL;
    int winner = 0;

    if (error_handling(ac, av) != 0)
        return (ERROR);
    matchstick = init_structs(av, matchstick);
    if (!matchstick)
        return (ERROR);
    winner = game(matchstick);
    if (winner == CONTINUE)
        return (CONTINUE);
    free_all(matchstick);
    return (winner);
}