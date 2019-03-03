/*
** EPITECH PROJECT, 2017
** my_cook_2017
** File description:
** defeat.c
*/

#include "my.h"

void				reset_game_info(all_t *all)
{
	for (int i = 0; i < 8; i++)
		all->game_info.current_recipe[i] = -1;
	all->game_info.place_in_recipe = 0;
	all->game_info.button_pressed = 0;
	all->game_info.nb_recipes = 1;
	all->game_info.random_frequence = 200;
	all->game_info.money = 5;
}

void 				reset_game(all_t *all)
{
	reset_game_info(all);
	all->list_recipe = init_list_recipe(all);
}

void 				get_max_profit(all_t *all)
{
	if (all->game_info.money > all->scoreboard.max_profit)
		all->scoreboard.max_profit = all->game_info.money;
}

void				set_all_string_defeat_scene(all_t *all)
{
	char *so = malloc(sizeof(char) * 100);
	char *lo = malloc(sizeof(char) * 100);
	char *mp = malloc(sizeof(char) * 100);

	my_getcharstar(all->scoreboard.served_orders, so);
	my_getcharstar(all->scoreboard.lost_orders, lo);
	my_getcharstar(all->scoreboard.max_profit, mp);
	sfText_setString(all->scenes[5].text[1].text, so);
	sfText_setString(all->scenes[5].text[2].text, lo);
	sfText_setString(all->scenes[5].text[3].text, mp);
	free(so);
	free(lo);
	free(mp);
}