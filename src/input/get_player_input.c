/*
** EPITECH PROJECT, 2021
** B-CPE-200-BAR-2-1-matchstick-pol.siles-polo
** File description:
** get_player_input
*/

#include "matchstick.h"

void display_player_comment(game_t *game)
{
    my_putstr(P_REMOVED);
    my_put_nbr(game->turn->matches);
    my_putstr(MATCHES_REMOVED);
    my_put_nbr(game->turn->line + 1);
    my_putchar(ENTER);
}

game_t *get_player_input(game_t *game, map_t *mapinfo)
{
    do {
    game = input_player_line(game, mapinfo);
    if (!game)
        return (NULL);
    if (game->turn->line >= 0)
        game = input_player_matches(game, mapinfo);
    if (!game)
        return (NULL);
    } while (game->turn->line < 0 || game->turn->matches < 0);
    display_player_comment(game);
    return (game);
}