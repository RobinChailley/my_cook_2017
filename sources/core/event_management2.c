/*
** EPITECH PROJECT, 2017
** my_cook_2017
** File description:
** event_management.c
*/

#include "my.h"

void 				event_management_core(all_t *all, int nb_button)
{
	for (int i = 0; i < nb_button; i++) {
		if (button_is_clicked(all->scenes[all->current_scene]\
		.button[i], sfMouse_getPosition ((const sfWindow *)\
		all->window.window)) == 1 && all->scenes[all->current_scene]\
		.button[i].type == MOUSE) {
			all->scenes[all->current_scene].\
			button[i].callback(all);
			break;
		}
	}
}

void 				event_management(all_t *all)
{
	int nb_button = all->scenes[all->current_scene].nb_button;

	while (sfRenderWindow_pollEvent(all->window.window, &all->\
	window.event)) {
		if (all->window.event.type == sfEvtClosed)
			sfRenderWindow_close(all->window.window);
		else if (all->window.event.type == sfEvtMouseButtonPressed) {
			event_management_core(all, nb_button);
		}
		button_management(all);
	}
}

void 				keyboard_event_management(all_t *all)
{
	if (all->current_scene == 2 && sfKeyboard_isKeyPressed(sfKeyEscape))
		all->current_scene = 1;
	else if (sfKeyboard_isKeyPressed(sfKeySpace))
		reset_current_recipe(all);
}