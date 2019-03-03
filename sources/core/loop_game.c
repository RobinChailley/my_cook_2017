/*
** EPITECH PROJECT, 2017
** my_cook_2017
** File description:
** loop_game.c
*/

#include "my.h"

void 				gesiton_money(all_t *all)
{
	my_getcharstar(all->game_info.money, all->scenes[2].text[0].str);
	sfText_setString(all->scenes[2].text[0].text, all->scenes[2].\
	text[0].str);
}

void 				reset_enable_button(all_t *all)
{
	for (int i = 0; i < all->scenes[2].nb_button; i++)
		all->scenes[2].button[i].enable = 1;
}

void 				keep_one_recipe(all_t *all)
{
	if (all->list_recipe->first == NULL) {
		all->list_recipe = init_list_recipe(all);
		all->game_info.nb_recipes++;
	}
}

void 				loop_game(all_t *all)
{
	keep_one_recipe(all);
	if (all->game_info.money < -4) {
		set_all_string_defeat_scene(all);
		all->current_scene = 5;
	}
	get_max_profit(all);
	hover_button_gestion(all);
	event_management(all);
	keyboard_event_management(all);
	display_animation(all);
	draw_scene(all);
	reset_enable_button(all);
	main_clock_management(all);
	random_insert_recipe(all);
	delete_terminated_recipe(all);
	delete_wasted_recipe(all);
	guess_which_current_recipe_id(all);
	gesiton_money(all);
	difficulty_choice(all);
}