/*
** EPITECH PROJECT, 2021
** B-CPE-200-BAR-2-1-matchstick-pol.siles-polo
** File description:
** free_all
*/

#include "matchstick.h"

void free_all(matchstick_t *matchstick)
{
    free_mapinfo(matchstick->mapinfo);
    free_game(matchstick->game);
    free(matchstick);
}