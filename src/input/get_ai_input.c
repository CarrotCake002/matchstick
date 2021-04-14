/*
** EPITECH PROJECT, 2021
** B-CPE-200-BAR-2-1-matchstick-pol.siles-polo
** File description:
** get_ai_input
*/

#include "matchstick.h"

void display_ai_comment(game_t *game)
{
    my_putstr(AI_REMOVED);
    my_put_nbr(game->turn->matches);
    my_putstr(MATCHES_REMOVED);
    my_put_nbr(game->turn->line + 1);
    my_putchar(ENTER);
}

game_t *get_ai_input(game_t *game, map_t *mapinfo)
{
    srand(time(0));
    do {
    game = input_ai_line(game, mapinfo);
    game = input_ai_matches(game, mapinfo);
    } while (game->turn->matches == 0);
    display_ai_comment(game);
    return (game);
}