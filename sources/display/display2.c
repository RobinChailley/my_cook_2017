/*
** EPITECH PROJECT, 2017
** my_cook_2017
** File description:
** sources/display.c
*/

#include "my.h"

int 				guess_which_current_recipe_id(all_t *all)
{
	if (all->list_recipe->first == NULL)
		return (0);
	guess_which_current_recipe_id_core(all);
	if (int_array_cmp(all->list_recipe->first->recipe,\
	(int [8]){13, 8, 9, 6, 5, 4, 12, 14}, 8) == 1)
		all->game_info.recipe_id = 2;
	else if (int_array_cmp(all->list_recipe->first->recipe,\
	(int [6]){2, 7, 10, 1, 12, 14}, 6) == 1)
		all->game_info.recipe_id = 3;
}

void				difficulty_choice(all_t *all)
{
	if (all->game_info.difficulty == 1)
		sfSprite_setPosition(all->scenes[4].object[1].\
		sprite, (sfVector2f){580, 340});
	else if (all->game_info.difficulty == 2)
		sfSprite_setPosition(all->scenes[4].object[1].\
		sprite, (sfVector2f){580, 485});
	else if (all->game_info.difficulty == 3)
		sfSprite_setPosition(all->scenes[4].object[1].\
		sprite, (sfVector2f){580, 625});
}

void 				display_animation_core(all_t *all)
{
	for (int i = 0; i < all->scenes[all->current_scene].\
	nb_object; i++) {
		all->scenes[all->current_scene].object[i].\
		rect.left += all->scenes[all->current_scene].\
		object[i].offset;
		if (all->scenes[all->current_scene].object[i]\
		.rect.left > all->scenes[all->current_scene].\
		object[i].size_max)
			all->scenes[all->current_scene].\
			object[i].rect.left = 0;
		sfSprite_setTextureRect(all->scenes[all->\
		current_scene].object[i].sprite, all->scenes\
		[all->current_scene].object[i].rect);
	}
}

void 				display_animation(all_t *all)
{
	if (all->current_scene == 2) {
		if (all->my_clock.n2 > 10) {
			display_animation_core(all);
			all->my_clock.n2 = 0;
		}
	}
}