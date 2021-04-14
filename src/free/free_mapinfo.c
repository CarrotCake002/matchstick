/*
** EPITECH PROJECT, 2021
** B-CPE-200-BAR-2-1-matchstick-pol.siles-polo
** File description:
** free_all
*/

#include "matchstick.h"

void free_map(map_t *mapinfo)
{
    int i = 0;

    while (i < mapinfo->height) {
        free(mapinfo->map[i]);
        i++;
    }
    free(mapinfo->map);
}

void free_mapinfo(map_t *mapinfo)
{
    free_map(mapinfo);
    free(mapinfo);
}