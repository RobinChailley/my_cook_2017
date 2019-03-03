/*
** EPITECH PROJECT, 2017
** my_cook_2017
** File description:
** insert_ing1.c
*/

#include "my.h"

void 			put_puffpastry(all_t *all, int i)
{
	if (all->list_recipe->first->recipe[all->game_info.place_in_recipe]\
	== 2) {
		all->game_info.current_recipe[all->game_info.place_in_recipe]\
		 = 2;
		if (all->game_info.button_pressed == 0)
			all->game_info.place_in_recipe += 1;
	} else
		all->scenes[2].button[i].enable = 0;
	all->game_info.money--;
}

void 			put_applejam(all_t *all, int i)
{
	if (all->list_recipe->first->recipe[all->game_info.place_in_recipe]\
	== 11) {
		all->game_info.current_recipe[all->game_info.place_in_recipe]\
		 = 11;
		if (all->game_info.button_pressed == 0)
		all->game_info.place_in_recipe += 1;
	} else
		all->scenes[2].button[i].enable = 0;
	all->game_info.money--;
}

void 			put_cutapples(all_t *all, int i)
{
	if (all->list_recipe->first->recipe[all->game_info.place_in_recipe]\
	== 3) {
		all->game_info.current_recipe[all->game_info.place_in_recipe]\
		 = 3;
		if (all->game_info.button_pressed == 0)
			all->game_info.place_in_recipe += 1;
	} else
		all->scenes[2].button[i].enable = 0;
	all->game_info.money--;
}

void 			put_egg(all_t *all, int i)
{
	if (all->list_recipe->first->recipe[all->game_info.place_in_recipe]\
	== 8) {
		all->game_info.current_recipe[all->game_info.place_in_recipe]\
		 = 8;
		if (all->game_info.button_pressed == 0)
			all->game_info.place_in_recipe += 1;
	} else
		all->scenes[2].button[i].enable = 0;
	all->game_info.money--;
}

void 			put_suggar(all_t *all, int i)
{
	if (all->list_recipe->first->recipe[all->game_info.place_in_recipe]\
	== 1) {
		all->game_info.current_recipe[all->game_info.place_in_recipe]\
		 = 1;
		if (all->game_info.button_pressed == 0)
			all->game_info.place_in_recipe += 1;
	} else
		all->scenes[2].button[i].enable = 0;
	all->game_info.money--;
}