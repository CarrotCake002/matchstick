##
## EPITECH PROJECT, 2021
## makefile
## File description:
## Makefile to compile
##

LIB_PATH	=	lib/my/src/

SRC_PATH 	=	src/

MAIN 		= 	$(SRC_PATH)main/

ERR_HANDL 	=	$(SRC_PATH)error_handling/

MALLOC 		= 	$(SRC_PATH)malloc/

CREATE 		= 	$(SRC_PATH)create/

INPUT 		=	$(SRC_PATH)input/

INIT 		=	$(SRC_PATH)init/

GAME 		=	$(SRC_PATH)game/

MAP 		= 	$(SRC_PATH)map/

INPUT 		= 	$(SRC_PATH)input/

CHECK 		= 	$(SRC_PATH)check/

FREE 		= 	$(SRC_PATH)free/

NAME   	=    matchstick

SRC     =	$(MAIN)main.c 						\
			$(MAIN)matchstick.c 				\
			$(ERR_HANDL)error_handling.c		\
			$(INIT)init_structs.c 				\
			$(INIT)init_map.c 					\
			$(INIT)init_game.c 					\
			$(MALLOC)malloc_map.c 				\
			$(CREATE)create_map.c 				\
			$(GAME)game.c 						\
			$(MAP)display_map.c 				\
			$(MAP)update_map.c 					\
			$(INPUT)get_player_input.c 			\
			$(INPUT)input_player_line.c 		\
			$(INPUT)input_player_matches.c 		\
			$(INPUT)get_ai_input.c 				\
			$(INPUT)input_ai_line.c 			\
			$(INPUT)input_ai_matches.c 			\
			$(FREE)free_structs.c				\
			$(FREE)free_mapinfo.c 				\
			$(FREE)free_game.c 					\
			$(CHECK)check_matches_in_line.c 	\
			$(CHECK)check_win_condition.c 		\
			$(LIB_PATH)my_putchar.c 			\
			$(LIB_PATH)my_putstr.c 				\
			$(LIB_PATH)my_strlen.c 				\
			$(LIB_PATH)my_put_nbr.c 			\
			$(LIB_PATH)my_strcpy.c 				\
			$(LIB_PATH)my_strcmp.c 				\
			$(LIB_PATH)my_strdup.c 				\
			$(LIB_PATH)my_strcat.c 				\
			$(LIB_PATH)my_arr_len.c 			\
			$(LIB_PATH)my_getnbr.c 				\
			$(LIB_PATH)my_str_isnum.c 			\
			$(LIB_PATH)my_strlen_to_endline.c 	\
			$(LIB_PATH)my_str_a_to_b_cpy.c 		\
			$(LIB_PATH)my_str_to_char_cpy.c 	\
			$(LIB_PATH)my_str_to_word_array.c 	\

OBJ     =    $(SRC:.c=.o)

CC		=    gcc

CFLAGS =	-I include/
CFLAGS += 	-pedantic
CFLAGS += 	-W -Wall -Wextra
CFLAGS += 	-Wno-long-long
CFLAGS += 	-g3

all:       $(NAME)

$(NAME):        $(OBJ)
	$(CC) -o $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean:         clean
	rm -rf $(NAME)

re:             fclean all
