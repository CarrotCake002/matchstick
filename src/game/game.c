/*
** EPITECH PROJECT, 2021
** game.c
** File description:
** function to start the game
*/

#include "matchstick.h"

matchstick_t *do_player_turn(matchstick_t *matchstick)
{
    display_map(matchstick->mapinfo);
    my_putstr("\nYour turn:\n");
    matchstick->game =
    get_player_input(matchstick->game, matchstick->mapinfo);
    if (!matchstick->game)
        return (NULL);
    matchstick->mapinfo->map =
        update_map(matchstick->game->turn, matchstick->mapinfo);
    if (matchstick->game->win == 0) {
        if (check_win_condition(matchstick->mapinfo) == true)
            matchstick->game->win = 2;
    }
    return (matchstick);
}

matchstick_t *do_ai_turn(matchstick_t *matchstick)
{
    display_map(matchstick->mapinfo);
    my_putstr("\nAI's turn...\n");
    matchstick->game = get_ai_input(matchstick->game, matchstick->mapinfo);
    matchstick->mapinfo->map =
        update_map(matchstick->game->turn, matchstick->mapinfo);
    if (matchstick->game->win == 0) {
        if (check_win_condition(matchstick->mapinfo) == true)
            matchstick->game->win = 1;
    }
    matchstick->game->turn->line = -1;
    matchstick->game->turn->matches = -1;
    return (matchstick);
}

int main_loop(matchstick_t *matchstick)
{
    while (matchstick->game->win == 0) {
        matchstick = do_player_turn(matchstick);
        if (!matchstick)
            return (CONTINUE);
        if (matchstick->game->win == 0)
            matchstick = do_ai_turn(matchstick);
    }
    return (matchstick->game->win);
}

void display_win_comment(int win)
{
    if (win == 2)
        my_putstr(AI_WIN);
    else
        my_putstr(PLAYER_WIN);
}

int game(matchstick_t *matchstick)
{
    int win = 0;

    win = main_loop(matchstick);
    if (win == CONTINUE)
        return (CONTINUE);
    display_map(matchstick->mapinfo);
    display_win_comment(win);
    return (win);
}