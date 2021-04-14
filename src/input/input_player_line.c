/*
** EPITECH PROJECT, 2021
** B-CPE-200-BAR-2-1-game-pol.siles-polo
** File description:
** input_line
*/

#include "matchstick.h"

bool check_line_input(char *buff, int height)
{
    int line = 0;

    if (!buff)
        return (false);
    if (my_strlen(buff) == 1 || my_str_isnum(buff) != true) {
        my_putstr(INVALID_LINE_INPUT);
        return (false);
    }
    line = my_getnbr(buff);
    if (line > height) {
        my_putstr(OUT_OF_RANGE);
        return (false);
    }
    return (true);
}

game_t *input_player_line(game_t *game, map_t *mapinfo)
{
    char *buff = NULL;
    size_t bufsize = 0;

    my_putstr("Line: ");
    if (getline(&buff, &bufsize, stdin) == -1)
        return (NULL);
    if (check_line_input(buff, mapinfo->height) != true)
        game->turn->line = -1;
    else
        game->turn->line = my_getnbr(buff) - 1;
    free(buff);
    return (game);
}