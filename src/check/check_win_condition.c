/*
** EPITECH PROJECT, 2021
** B-CPE-200-BAR-2-1-matchstick-pol.siles-polo
** File description:
** check_win_condition
*/

#include "matchstick.h"

int count_sticks_in_map(char **map)
{
    int x = 0;
    int y = 0;
    int count = 0;

    while (map[y] != NULL) {
        while (map[y][x] != STR_END) {
            if (map[y][x] == STICK)
                count++;
            x++;
        }
        x = 0;
        y++;
    }
    return (count);
}

bool check_win_condition(map_t *mapinfo)
{
    int count = count_sticks_in_map(mapinfo->map);

    if (count == 0)
        return (true);
    return (false);
}