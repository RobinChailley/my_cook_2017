/*
** EPITECH PROJECT, 2017
** my_cook_2017
** File description:
** insert_ing2.c
*/

#include "my.h"

void 			put_flour(all_t *all, int i)
{
	if (all->list_recipe->first->recipe[all->game_info.place_in_recipe]\
	== 9) {
		all->game_info.current_recipe[all->game_info.place_in_recipe]\
		 = 9;
		if (all->game_info.button_pressed == 0)
			all->game_info.place_in_recipe += 1;
	} else
		all->scenes[2].button[i].enable = 0;
	all->game_info.money--;
}

void 			put_butter(all_t *all, int i)
{
	if (all->list_recipe->first->recipe[all->game_info.place_in_recipe]\
	== 6) {
		all->game_info.current_recipe[all->game_info.place_in_recipe]\
		 = 6;
		if (all->game_info.button_pressed == 0)
			all->game_info.place_in_recipe += 1;
	} else
		all->scenes[2].button[i].enable = 0;
	all->game_info.money--;
}

void 			put_milk(all_t *all, int i)
{
	if (all->list_recipe->first->recipe[all->game_info.place_in_recipe]\
	== 5) {
		all->game_info.current_recipe[all->game_info.place_in_recipe]\
		 = 5;
		if (all->game_info.button_pressed == 0)
			all->game_info.place_in_recipe += 1;
	} else
		all->scenes[2].button[i].enable = 0;
	all->game_info.money--;
}

void 			put_cannabis(all_t *all, int i)
{
	if (all->list_recipe->first->recipe[all->game_info.place_in_recipe]\
	== 4) {
		all->game_info.current_recipe[all->game_info.place_in_recipe]\
		 = 4;
		if (all->game_info.button_pressed == 0)
			all->game_info.place_in_recipe += 1;
	} else
		all->scenes[2].button[i].enable = 0;
	all->game_info.money--;
}

void 			put_custard(all_t *all, int i)
{
	if (all->list_recipe->first->recipe[all->game_info.place_in_recipe]\
	== 7) {
		all->game_info.current_recipe[all->game_info.place_in_recipe]\
		 = 7;
		if (all->game_info.button_pressed == 0)
			all->game_info.place_in_recipe += 1;
	} else
		all->scenes[2].button[i].enable = 0;
	all->game_info.money--;
}