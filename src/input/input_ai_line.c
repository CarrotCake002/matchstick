/*
** EPITECH PROJECT, 2021
** B-CPE-200-BAR-2-1-matchstick-pol.siles-polo
** File description:
** input_ai_line
*/

#include "matchstick.h"

game_t *input_ai_line(game_t *game, map_t *mapinfo)
{
    game->turn->line = rand() % (mapinfo->height);
    return (game);
}