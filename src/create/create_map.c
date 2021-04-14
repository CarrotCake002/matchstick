/*
** EPITECH PROJECT, 2021
** create_map.c
** File description:
** create_map
*/

#include "matchstick.h"

int fill_sticks(char *line, int sticks, int x)
{
    int i = 0;

    while (i < sticks) {
        line[x] = STICK;
        i++;
        x++;
    }
    return (x);
}

int fill_spaces(char *line, int limit, int x)
{
    while (x < limit) {
        line[x] = SPACE;
        x++;
    }
    return (x);
}

char *fill_line(char *line, int sticks, int width)
{
    int nb_spaces = width - sticks;
    int x = 0;

    line = malloc(sizeof(char) * width);
    if (!line)
        return (NULL);
    x = fill_spaces(line, nb_spaces / 2, x);
    x = fill_sticks(line, sticks, x);
    x = fill_spaces(line, nb_spaces + sticks - 1, x);
    line[x] = '\0';
    return (line);
}

char **fill_map(map_t *mapinfo)
{
    int y = 0;
    int nb_sticks = 1;

    while (y < mapinfo->height) {
        mapinfo->map[y] = fill_line(mapinfo->map[y], nb_sticks, mapinfo->width);
        if (!mapinfo->map[y])
            return (NULL);
        nb_sticks += 2;
        y++;
    }
    mapinfo->map[y] = NULL;
    y = 0;
    while (mapinfo->map[y]) {
        y++;
    }
    return (mapinfo->map);
}