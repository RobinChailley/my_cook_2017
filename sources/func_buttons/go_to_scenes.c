/*
** EPITECH PROJECT, 2017
** my_cook_2017
** File description:
** func_buttons.c
*/

#include "my.h"

void 				my_exit(all_t *all)
{
	sfRenderWindow_close(all->window.window);
}

void 				go_to_scene_0(all_t *all)
{
	all->current_scene = 0;
	reset_game(all);
	all->scoreboard = create_scoreboard();
}

void 				go_to_scene_1(all_t *all)
{
	all->current_scene = 1;
}