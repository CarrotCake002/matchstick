/*
** EPITECH PROJECT, 2021
** B-CPE-200-BAR-2-1-matchstick-pol.siles-polo
** File description:
** update_map
*/

#include "matchstick.h"

int check_line_end(char **map, int line)
{
    int i = 0;

    while (map[line][i] == SPACE)
        i++;
    while (map[line][i] == STICK)
        i++;
    return (i - 1);
}

char **delete_matches(char **map, int line, int matches, int pos)
{
    int i = 0;

    while (i < matches) {
        map[line][pos] = SPACE;
        pos--;
        i++;
    }
    return (map);
}

char **update_map(turn_t *turn, map_t *mapinfo)
{
    int pos = check_line_end(mapinfo->map, turn->line);

    mapinfo->map = delete_matches(mapinfo->map, turn->line, turn->matches, pos);
    return (mapinfo->map);
}