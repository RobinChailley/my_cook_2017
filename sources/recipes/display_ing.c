/*
** EPITECH PROJECT, 2017
** my_cook_2017
** File description:
** recipes_gestion.c
*/

#include "my.h"

int 				gestion_of_display_ing(all_t *all)
{
	for (int i = 0; i < all->game_info.place_in_recipe; i++)
		all->ing_ig.display[i] = 1;
	for (int i = all->game_info.place_in_recipe; i < all->list_recipe->\
	first->nb_ing; i++)
		all->ing_ig.display[i] = 0;
}

void 				set_texture_space_cake(all_t *all)
{
	sfSprite_setPosition(all->ing_ig.sprite[6],\
	(sfVector2f){1250, 680});
	sfSprite_setTexture(all->ing_ig.sprite[0],\
	all->textures.bowl_ing, sfTrue);
	sfSprite_setTexture(all->ing_ig.sprite[1],\
	all->textures.egg_ing, sfTrue);
	sfSprite_setTexture(all->ing_ig.sprite[2],\
	all->textures.flour_ing, sfTrue);
	sfSprite_setTexture(all->ing_ig.sprite[3],\
	all->textures.butter_ing, sfTrue);
	sfSprite_setTexture(all->ing_ig.sprite[4],\
	all->textures.milk_ing, sfTrue);
	sfSprite_setTexture(all->ing_ig.sprite[5],\
	all->textures.cannabis_ing, sfTrue);
	sfSprite_setTexture(all->ing_ig.sprite[6],\
	all->textures.cooked_space_cake, sfTrue);
}

void 				set_texture_pound_cake(all_t *all)
{
	sfSprite_setTexture(all->ing_ig.sprite[0],\
	all->textures.dish_ing, sfTrue);
	sfSprite_setTexture(all->ing_ig.sprite[1],\
	all->textures.egg_pound_cake_ing, sfTrue);
	sfSprite_setTexture(all->ing_ig.sprite[2],\
	all->textures.flour_pound_cake_ing, sfTrue);
	sfSprite_setTexture(all->ing_ig.sprite[3],\
	all->textures.sugar_pound_cake_ing, sfTrue);
	sfSprite_setTexture(all->ing_ig.sprite[4],\
	all->textures.butter_pound_cake_ing, sfTrue);
	sfSprite_setTexture(all->ing_ig.sprite[5],\
	all->textures.cooked_pound_cake, sfTrue);
}

int 				draw_all_ing(all_t *all)
{
	if (all->list_recipe->first == NULL)
		return (0);
	if (all->current_scene == 2) {
		gestion_of_display_ing(all);
		draw_apple_pie(all);
		draw_pound_cake(all);
		draw_space_cake(all);
		draw_strawberry_pie(all);
	}
}