/*
** EPITECH PROJECT, 2021
** B-CPE-200-BAR-2-1-matchstick-pol.siles-polo
** File description:
** init_all
*/

#include "matchstick.h"

matchstick_t *init_structs(char **av, matchstick_t *matchstick)
{
    matchstick = malloc(sizeof(matchstick_t));
    if (!matchstick)
        return (NULL);
    matchstick->mapinfo = init_map(av, matchstick->mapinfo);
    matchstick->game = init_game(av, matchstick->game);
    if (!matchstick->mapinfo || !matchstick->game)
        return (NULL);
    return (matchstick);
}