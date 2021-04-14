/*
** EPITECH PROJECT, 2021
** B-CPE-200-BAR-2-1-matchstick-pol.siles-polo
** File description:
** check_matches_in_line
*/

#include "matchstick.h"

int check_matches_in_line(int line, char **map)
{
    int i = 0;
    int count = 0;

    while (map[line][i] != '\0') {
        if (map[line][i] == STICK)
            count++;
        i++;
    }
    return (count);
}