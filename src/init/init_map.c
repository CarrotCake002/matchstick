/*
** EPITECH PROJECT, 2021
** init_map.c
** File description:
** function to init the map
*/

#include "matchstick.h"

map_t *init_map(char **av, map_t *mapinfo)
{
    mapinfo = malloc(sizeof(map_t));
    if (!mapinfo)
        return (NULL);
    mapinfo->map = malloc_map(av, mapinfo);
    if (!mapinfo->map)
        return (NULL);
    mapinfo->map = fill_map(mapinfo);
    if (!mapinfo->map)
        return (NULL);
    return (mapinfo);
}