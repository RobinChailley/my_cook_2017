/*
** EPITECH PROJECT, 2017
** my_cook_2017
** File description:
** clocks_gestion.c
*/

#include "my.h"

void				main_clock_management(all_t *all)
{
	all->my_clock.time = sfClock_getElapsedTime(all->my_clock.clock);
	all->my_clock.seconds = all->my_clock.time.microseconds / 1000000.0;
	if (all->my_clock.seconds > 0.001) {
		all->my_clock.n += 1;
		all->my_clock.n2 += 1;
		sfClock_restart(all->my_clock.clock);
	}
}

void				random_insert_recipe(all_t *all)
{
	if (all->current_scene == 2) {
		if (all->my_clock.n > all->game_info.random_frequence) {
			insert_orders(all);
			all->game_info.random_frequence = rand_ab(100, 300);
			all->my_clock.n = 0;
		}
	}
}