/*
** EPITECH PROJECT, 2021
** B-CPE-200-BAR-2-1-matchstick-pol.siles-polo
** File description:
** display_map
*/

#include "matchstick.h"

void display_top_bot_lines(int width)
{
    int i = 0;

    while (i <= width) {
        my_putchar('*');
        i++;
    }
    my_putchar('\n');
}

void display_map_content(char **map)
{
    int i = 0;

    while (map[i]) {
        my_putchar(WALL);
        my_putstr(map[i]);
        my_putchar(WALL);
        my_putchar('\n');
        i++;
    }
}

void display_map(map_t *mapinfo)
{
    display_top_bot_lines(mapinfo->width);
    display_map_content(mapinfo->map);
    display_top_bot_lines(mapinfo->width);
}