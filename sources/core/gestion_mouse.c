/*
** EPITECH PROJECT, 2017
** PSU_my_cook_2017
** File description:
** gestion_mouse.c
*/

#include "my.h"

int 				button_is_clicked(button_t button,
sfVector2i click_position)
{
	return (click_position.x < sfRectangleShape_getPosition(button.shape).x
		+ sfRectangleShape_getSize(button.shape).x &&
		click_position.x > sfRectangleShape_getPosition(button.shape).x
		&& click_position.y < sfRectangleShape_getPosition(button.\
		shape).y + sfRectangleShape_getSize(button.shape).y &&
		click_position.y > sfRectangleShape_getPosition\
		(button.shape).y);
}

void 				hover_button_gestion_core(all_t *all, int i)
{
	if (button_is_clicked(all->scenes[all->current_scene].\
	button[i], sfMouse_getPosition((const sfWindow *)\
	all->window.window)))
		all->scenes[all->current_scene].button[i].\
		rect.left = all->scenes[all->current_scene].\
		button[i].offset;
	else
		all->scenes[all->current_scene].button[i].\
		rect.left = 0;
	sfRectangleShape_setTextureRect(all->scenes[all->\
	current_scene].button[i].shape, all->scenes[all->\
	current_scene].button[i].rect);
}

void 				hover_button_gestion(all_t *all)
{
	for (int i = 0; i < all->scenes[all->current_scene].nb_button; i++) {
		if (all->scenes[all->current_scene].button[i].type == MOUSE) {
			hover_button_gestion_core(all, i);
		}
	}
}