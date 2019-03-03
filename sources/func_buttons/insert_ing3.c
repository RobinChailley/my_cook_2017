/*
** EPITECH PROJECT, 2017
** my_cook_2017
** File description:
** insert_ing3.c
*/

#include "my.h"

void 			put_strawberry(all_t *all, int i)
{
	if (all->list_recipe->first->recipe[all->game_info.place_in_recipe]\
	== 10) {
		all->game_info.current_recipe[all->game_info.place_in_recipe]\
		 = 10;
		if (all->game_info.button_pressed == 0)
			all->game_info.place_in_recipe += 1;
	} else
		all->scenes[2].button[i].enable = 0;
	all->game_info.money--;
}

void 			put_furnace(all_t *all, int i)
{
	if (all->list_recipe->first->recipe[all->game_info.place_in_recipe]\
	== 12) {
		all->game_info.current_recipe[all->game_info.place_in_recipe]\
		= 12;
		if (all->game_info.button_pressed == 0)
			all->game_info.place_in_recipe += 1;
	} else
		all->scenes[2].button[i].enable = 0;
	all->game_info.money--;
}

void 			put_bowl(all_t *all, int i)
{
	if (all->list_recipe->first->recipe[all->game_info.place_in_recipe]\
	== 13) {
		all->game_info.current_recipe[all->game_info.place_in_recipe]\
		= 13;
		if (all->game_info.button_pressed == 0)
			all->game_info.place_in_recipe += 1;
	} else
		all->scenes[2].button[i].enable = 0;
	all->game_info.money--;
}

void 			put_serve(all_t *all, int i)
{
	if (all->list_recipe->first->recipe[all->game_info.place_in_recipe]\
	== 14) {
		all->game_info.current_recipe[all->game_info.place_in_recipe]\
		= 14;
		if (all->game_info.button_pressed == 0)
			all->game_info.place_in_recipe += 1;
	} else
		all->scenes[2].button[i].enable = 0;
}

void 			put_dish(all_t *all, int i)
{
	if (all->list_recipe->first->recipe[all->game_info.place_in_recipe]\
	== 15) {
		all->game_info.current_recipe[all->game_info.place_in_recipe]\
		= 15;
		if (all->game_info.button_pressed == 0)
			all->game_info.place_in_recipe += 1;
	} else
		all->scenes[2].button[i].enable = 0;
	all->game_info.money--;
}