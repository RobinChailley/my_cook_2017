/*
** EPITECH PROJECT, 2017
** my_cook_2017
** File description:
** sources/display.c
*/

#include "my.h"

void				gestion_clock(orders_t *tmp)
{
	my_getcharstar(tmp->time, tmp->clock_str);
	sfText_setString(tmp->clock_text, tmp->clock_str);
	tmp->clock.time = sfClock_getElapsedTime(tmp->clock.clock);
	tmp->clock.seconds = tmp->clock.time.microseconds / 1000000.0;
	if (tmp->clock.seconds > 1) {
		tmp->time -= 1;
		sfClock_restart(tmp->clock.clock);
	}
}

void 				delete_wasted_recipe_core(all_t *all, orders_t *tmp)
{
	while (tmp->next != NULL) {
		if (tmp->next->time < 1) {
			tmp->next = tmp->next->next;
			reset_current_recipe(all);
			all->game_info.nb_recipes -= 1;
			all->game_info.money -= 10;
			all->scoreboard.lost_orders++;
		}
		tmp = tmp->next;
	}
}

int 				delete_wasted_recipe(all_t *all)
{
	orders_t *tmp = all->list_recipe->first;

	if (tmp == NULL)
		return (0);
	if (all->list_recipe->first->time < 1) {
		all->list_recipe->first = all->list_recipe->first->next;
		all->game_info.nb_recipes -= 1;
		all->game_info.money -= 10;
		reset_current_recipe(all);
		all->scoreboard.lost_orders++;
	}
	delete_wasted_recipe_core(all, tmp);
}

void 				draw_recipes_core(all_t *all, orders_t *tmp, int *i)
{
	if (all->game_info.nb_recipes != 0) {
		while (tmp != NULL) {
			tmp->pos = (sfVector2f){30+270 * (*i), 30};
			tmp->pos_clock = (sfVector2f){30+270 * (*i), 30};
			sfSprite_setPosition(tmp->sprite, tmp->pos);
			sfRenderWindow_drawSprite(all->window.window,\
			tmp->sprite, NULL);
			sfText_setPosition(tmp->clock_text, tmp->\
			pos_clock);
			sfRenderWindow_drawText(all->window.window,\
			tmp->clock_text, NULL);
			gestion_clock(tmp);
			tmp = tmp->next;
			(*i)++;
		}
	}
}

void 				draw_recipes(all_t *all)
{
	orders_t *tmp = all->list_recipe->first;
	int i = 0;

	if (all->current_scene == 2) {
		draw_recipes_core(all, tmp, &i);
	}
}