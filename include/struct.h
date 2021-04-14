/*
** EPITECH PROJECT, 2021
** B-CPE-200-BAR-2-1-matchstick-pol.siles-polo
** File description:
** struct
*/

#ifndef STRUCT_H_
#define STRUCT_H_

typedef struct map_s {
    int height;
    int width;
    char **map;
} map_t;

typedef struct turn_s {
    int line;
    int matches;
} turn_t;

typedef struct game_s {
    int height;
    int max_sticks;
    int win;
    turn_t *turn;
} game_t;

typedef struct matchstick_s {
    map_t *mapinfo;
    game_t *game;
} matchstick_t;


#endif /* !STRUCT_H_ */