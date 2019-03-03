/*
** EPITECH PROJECT, 2017
** my_cook_2017
** File description:
** event_management.c
*/

#include "my.h"

void 				gestion_hover_button(all_t *all, int i)
{
	for (int a = 0; a < all->scenes[2].nb_button; a++)
		all->scenes[2].button[a].rect.left = 0;
	if (all->scenes[2].button[i].enable == 0)
		all->scenes[2].button[i].rect.left = all->scenes[2].\
		button[i].offset * 2;
	else if (all->scenes[2].button[i].enable == 1)
		all->scenes[2].button[i].rect.left = all->scenes[2].\
		button[i].offset;
	for (int a = 0; a < all->scenes[2].nb_button; a++)
		sfRectangleShape_setTextureRect(all->scenes[2].\
		button[a].shape, all->scenes[2].button[a].rect);
}

int 				use_button_game(all_t *all)
{
	int i = 0;

	if (all->window.event.type == sfEvtKeyPressed) {
		while (all->window.event.key.code != all->ptr_tab[i].\
		key_code) {
			if (i >= all->ptr_tab[0].nb_fptr - 1)
				return (0);
			i++;
		}
		(all->ptr_tab[i].fptr)(all, i);
		gestion_hover_button(all, i);
	}
	return (0);
}

void 				button_management(all_t *all)
{
	if (all->window.event.type == sfEvtKeyPressed) {
		use_button_game(all);
		all->game_info.button_pressed = 1;
	} else if (all->window.event.type == sfEvtKeyReleased) {
		all->game_info.button_pressed = 0;
		for (int a = 0; a < all->scenes[2].nb_button; a++) {
			all->scenes[2].button[a].rect.left = 0;
			sfRectangleShape_setTextureRect(all->scenes[2].\
			button[a].shape, all->scenes[2].button[a].rect);
		}
	}
}