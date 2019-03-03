/*
** EPITECH PROJECT, 2017
** my_cook_2017
** File description:
** recipes_gestion.c
*/

#include "my.h"

void 				draw_strawberry_pie(all_t *all)
{
	if (all->game_info.recipe_id == 3) {
		for (int i = 0; i < 5; i++)
			sfSprite_setPosition(all->ing_ig.sprite[i],\
			(sfVector2f){1400, 750});
		sfSprite_setTexture(all->ing_ig.sprite[0],\
		all->textures.puff_pastry_ing, sfTrue);
		sfSprite_setTexture(all->ing_ig.sprite[1],\
		all->textures.custard_ing, sfTrue);
		sfSprite_setTexture(all->ing_ig.sprite[2],\
		all->textures.strawberry_ing, sfTrue);
		sfSprite_setTexture(all->ing_ig.sprite[3],\
		all->textures.sugar_strawberry_pie_ing, sfTrue);
		sfSprite_setTexture(all->ing_ig.sprite[4],\
		all->textures.cooked_strawberry_pie, sfTrue);
		draw_strawberry_pie_core(all);
	}
}

void 				draw_space_cake_core(all_t *all)
{
	for (int i = 0; i < all->list_recipe->first->nb_ing; i++) {
		if (all->ing_ig.display[i] == 1)
			sfRenderWindow_drawSprite(all->window.window,\
			all->ing_ig.sprite[i], NULL);
	}
}

void 				draw_space_cake(all_t *all)
{
	if (all->game_info.recipe_id == 2) {
		for (int i = 0; i < 6; i++)
			sfSprite_setPosition(all->ing_ig.sprite[i],\
			(sfVector2f){1400, 750});
		set_texture_space_cake(all);
		draw_space_cake_core(all);
	}
}

void 				draw_pound_cake_core(all_t *all)
{
	for (int i = 0; i < all->list_recipe->first->nb_ing; i++) {
		if (all->ing_ig.display[i] == 1)
			sfRenderWindow_drawSprite(all->window.window,\
			all->ing_ig.sprite[i], NULL);
	}
}

void 				draw_pound_cake(all_t *all)
{
	if (all->game_info.recipe_id == 1) {
		for (int i = 0; i < 5; i++)
			sfSprite_setPosition(all->ing_ig.sprite[i],\
			(sfVector2f){1400, 750});
		sfSprite_setPosition(all->ing_ig.sprite[5],\
		(sfVector2f){1380, 715});
		set_texture_pound_cake(all);
		draw_pound_cake_core(all);
	}
}