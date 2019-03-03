/*
** EPITECH PROJECT, 2017
** my_cook_2017
** File description:
** recipes_gestion.c
*/

#include "my.h"

void 				set_position_ing_apple_pie(all_t *all)
{
	for (int i = 0; i < 4; i++)
		sfSprite_setPosition(all->ing_ig.sprite[i],\
		(sfVector2f){1400, 750});
	sfSprite_setPosition(all->ing_ig.sprite[4], (sfVector2f){1395, 745});
}

void 				draw_apple_pie_core(all_t *all)
{
	for (int i = 0; i < all->list_recipe->first->nb_ing; i++) {
		if (all->ing_ig.display[i] == 1)
			sfRenderWindow_drawSprite(all->window.window, \
			all->ing_ig.sprite[i], NULL);
	}
}

void 				draw_apple_pie(all_t *all)
{
	if (all->game_info.recipe_id == 0) {
		set_position_ing_apple_pie(all);
		sfSprite_setTexture(all->ing_ig.sprite[0], all->textures.\
		puff_pastry_ing, sfTrue);
		sfSprite_setTexture(all->ing_ig.sprite[1], all->textures.\
		apple_jam_ing, sfTrue);
		sfSprite_setTexture(all->ing_ig.sprite[2], all->textures.\
		cut_apples_ing, sfTrue);
		sfSprite_setTexture(all->ing_ig.sprite[3], all->textures.\
		sugar_ing, sfTrue);
		sfSprite_setTexture(all->ing_ig.sprite[4], all->textures.\
		cooked_apple_pie, sfTrue);
		draw_apple_pie_core(all);

	}
}

void 				draw_strawberry_pie_core(all_t *all)
{
	for (int i = 0; i < all->list_recipe->first->nb_ing; i++) {
		if (all->ing_ig.display[i] == 1)
			sfRenderWindow_drawSprite(all->window.window,\
			all->ing_ig.sprite[i], NULL);
	}
}