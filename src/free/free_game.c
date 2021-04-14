/*
** EPITECH PROJECT, 2021
** B-CPE-200-BAR-2-1-matchstick-pol.siles-polo
** File description:
** free_game
*/

#include "matchstick.h"

void free_game(game_t *game)
{
    free(game->turn);
    free(game);
}