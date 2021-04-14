/*
** EPITECH PROJECT, 2021
** malloc_map.c
** File description:
** function to malloc the map
*/

#include "matchstick.h"

char **malloc_map(char **av, map_t *mapinfo)
{
    char **map;

    mapinfo->height = my_getnbr(av[1]);
    mapinfo->width = mapinfo->height * 2;
    map = malloc(sizeof(char *) * (mapinfo->height + 1));
    if (!map)
        return (NULL);
    return (map);
}