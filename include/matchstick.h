/*
** EPITECH PROJECT, 2021
** matchstick.h
** File description:
** header of the matchstick program
*/

#ifndef MATCHSTICK_H_
#define MATCHSTICK_H_

#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>
#include "macros.h"
#include "struct.h"
#include "../lib/my/include/my_call_lib_functions.h"

int matchstick(int ac, char **av);
bool check_usage(int ac, char **av);
int error_handling(int ac, char **av);
void usage(void);


matchstick_t *init_structs(char **av, matchstick_t *matchstick);
map_t *init_map(char **av, map_t *mapinfo);
game_t *init_game(char **av, game_t *game);
char **fill_map(map_t *mapinfo);
char **malloc_map(char **av, map_t *mapinfo);


int game(matchstick_t *matchstick);
void display_map(map_t *mapinfo);
char **update_map(turn_t *turn, map_t *mapinfo);
game_t *get_player_input(game_t *game, map_t *mapinfo);
game_t *get_ai_input(game_t *game, map_t *mpainfo);
game_t *input_player_line(game_t *game, map_t *mapinfo);
game_t *input_player_matches(game_t *game, map_t *mapinfo);
game_t *input_ai_line(game_t *game, map_t *mapinfo);
game_t *input_ai_matches(game_t *game, map_t *mapinfo);


int check_matches_in_line(int line, char **map);
bool check_win_condition(map_t *map);


void free_all(matchstick_t *matchstick);
void free_mapinfo(map_t *mapinfo);
void free_game(game_t *game);

#endif /* !MATCHSTICK_H_ */