/*
** EPITECH PROJECT, 2021
** B-CPE-200-BAR-2-1-matchstick-pol.siles-polo
** File description:
** input_ai_matches
*/

#include "matchstick.h"

int count_sticks_in_line(char **map, int line)
{
    int i = 0;
    int count = 0;

    while (map[line][i] != STR_END) {
        if (map[line][i] == STICK)
            count++;
        i++;
    }
    return (count);
}

game_t *input_ai_matches(game_t *game, map_t *mapinfo)
{
    int line_sticks = count_sticks_in_line(mapinfo->map, game->turn->line);

    if (line_sticks < 1)
        game->turn->matches = 0;
    else {
        game->turn->matches = rand() % line_sticks;
        if (game->turn->matches < 1)
            game->turn->matches++;
    }
    if (game->turn->matches > game->max_sticks)
        game->turn->matches = 0;
    return (game);
}