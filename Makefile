##
## EPITECH PROJECT, 2018
##
## File description:
## Makefile
##

CC		=	gcc -g

CLFAGS		=	-Wextra -W -Wall -Wparentheses -Wsign-compare -Wpointer-sign -Wuninitialized -Wunused-but-set-variable

CFLAGS		=	-I ./include

LDFLAGS2 	= 	-lcsfml-window -lcsfml-system -lcsfml-graphics -lcsfml-audio

LDFLAGS 	= 	-lc_graph_prog

RM		=	rm -rf

SRC		=	main.c						\
			sources/core/lib.c 				\
			sources/create/create_game_scene1.c 		\
			sources/create/create_game_scene2.c 		\
			sources/create/create_game_scene3.c 		\
			sources/create/create_obj_text_buttons.c	\
			sources/create/init_struct.c			\
			sources/create/init_struct2.c			\
			sources/create/init_textures1.c			\
			sources/create/init_textures2.c			\
			sources/create/create_scene1.c			\
			sources/create/create_scene2.c			\
			sources/create/create_recipes.c 		\
			sources/create/create_info.c 	 		\
			sources/create/create_defeat_scene.c		\
			sources/core/loop_game.c 			\
			sources/core/ptr_tab.c 				\
			sources/core/gestion_mouse.c 			\
			sources/core/event_management1.c 		\
			sources/core/event_management2.c 		\
			sources/display/display1.c			\
			sources/display/display2.c			\
			sources/func_buttons/go_to_scenes.c		\
			sources/func_buttons/go_to_scenes2.c		\
			sources/func_buttons/game_difficulty.c		\
			sources/func_buttons/insert_ing1.c 	 	\
			sources/func_buttons/insert_ing2.c 	 	\
			sources/func_buttons/insert_ing3.c 	 	\
			sources/clocks/clock_management.c 		\
			sources/recipes/recipes_management.c 	 	\
			sources/recipes/draw_recipes1.c 	 		\
			sources/recipes/draw_recipes2.c 	 		\
			sources/recipes/display_ing.c 			\
			sources/recipes/display_recipes.c 		\
			sources/recipes/random_generation.c 		\
			sources/defeat/defeat.c 			\

OBJS		=	$(SRC:.c=.o)

NAME		=	my_cook

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS) $(CLFAGS) $(LDFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
