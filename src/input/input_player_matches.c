/*
** EPITECH PROJECT, 2021
** B-CPE-200-BAR-2-1-matchstick-pol.siles-polo
** File description:
** input_nb_matches
*/

#include "matchstick.h"

bool check_matches_value(int matches, game_t *game, char **map)
{
    if (matches > game->max_sticks) {
        my_putstr(FST_MANY_STICKS);
        my_put_nbr(game->max_sticks);
        my_putstr(SCND_MANY_STICKS);
        return (false);
    }
    if (matches > check_matches_in_line(game->turn->line, map)) {
        my_putstr(NOT_ENOUGH_MATCHES);
        return (false);
    }
    if (matches == 0) {
        my_putstr(RM_AT_LEAST_ONE);
        return (false);
    }
    return (true);
}

bool check_matches_input(char *buff, game_t *game, char **map)
{
    int matches = 0;

    if (!buff)
        return (false);
    if (my_strlen(buff) == 1 || my_str_isnum(buff) != true) {
        my_putstr(INVALID_LINE_INPUT);
        return (false);
    }
    matches = my_getnbr(buff);
    if (check_matches_value(matches, game, map) != true)
        return (false);
    return (true);
}

game_t *input_player_matches(game_t *game, map_t *mapinfo)
{
    char *buff = NULL;
    size_t bufsize = 0;

    my_putstr("Matches: ");
    if (getline(&buff, &bufsize, stdin) == -1)
        return (NULL);
    if (check_matches_input(buff, game, mapinfo->map) != true)
        game->turn->matches = -1;
    else
        game->turn->matches = my_getnbr(buff);
    free(buff);
    return (game);
}