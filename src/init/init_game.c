/*
** EPITECH PROJECT, 2021
** B-CPE-200-BAR-2-1-matchstick-pol.siles-polo
** File description:
** init_game
*/

#include "matchstick.h"

turn_t *init_turn(turn_t *turn)
{
    turn = malloc(sizeof(turn_t));
    if (!turn)
        return (NULL);
    return (turn);
}

game_t *init_game(char **av, game_t *game)
{
    game = malloc(sizeof(game_t));
    if (!game)
        return (NULL);
    game->turn = init_turn(game->turn);
    if (!game->turn)
        return (NULL);
    game->max_sticks = my_getnbr(av[2]);
    return (game);
}