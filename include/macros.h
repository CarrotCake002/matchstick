/*
** EPITECH PROJECT, 2021
** B-CPE-200-BAR-2-1-matchstick-pol.siles-polo
** File description:
** macros
*/

#ifndef MACROS_H_
#define MACROS_H_

//OUTPUT RETURN
#define ERROR 84
#define CONTINUE 0

//LINE INPUT
#define INVALID_LINE_INPUT "Error: invalid input (positive number expected)\n"
#define NOT_ENOUGH_MATCHES "Error: not enough matches on this line\n"
#define OUT_OF_RANGE "Error: this line is out of range\n"
#define FST_MANY_STICKS "Error: you cannot remove more than "
#define SCND_MANY_STICKS " matches per turn\n"
#define RM_AT_LEAST_ONE "Error: you have to remove at least one match\n"

//COMMENTARIST
#define P_REMOVED "Player removed "
#define AI_REMOVED "AI removed "
#define MATCHES_REMOVED " match(es) from line "
#define AI_WIN "You lost, too bad...\n"
#define PLAYER_WIN "I lost... snif... but I'll get you next time!!\n"

//SINGLE CHARS
#define ENTER '\n'
#define STR_END '\0'

//MAP CHARS
#define WALL '*'
#define SPACE ' '
#define STICK '|'

#endif /* !MACROS_H_ */