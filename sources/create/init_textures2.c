/*
** EPITECH PROJECT, 2017
** my_cook_2017
** File description:
** create.c
*/

#include "my.h"

void 				create_textures_4(textures_t *textures)
{
	textures->sugar_ing = sfTexture_createFromFile\
	("img/sprites_ing/apple_pie/sugar.png", NULL);
	textures->cooked_apple_pie = sfTexture_createFromFile\
	("img/sprites_ing/apple_pie/cooked_apple_pie.png", NULL);
	textures->bowl_ing = sfTexture_createFromFile\
	("img/sprites_ing/space_cake/bol.png", NULL);
	textures->butter_ing = sfTexture_createFromFile\
	("img/sprites_ing/space_cake/butter.png", NULL);
	textures->cannabis_ing = sfTexture_createFromFile\
	("img/sprites_ing/space_cake/cannabis.png", NULL);
	textures->egg_ing = sfTexture_createFromFile\
	("img/sprites_ing/space_cake/egg.png", NULL);
	textures->flour_ing = sfTexture_createFromFile\
	("img/sprites_ing/space_cake/flour.png", NULL);
	textures->milk_ing = sfTexture_createFromFile\
	("img/sprites_ing/space_cake/milk.png", NULL);
	textures->cooked_space_cake = sfTexture_createFromFile\
	("img/sprites_ing/space_cake/cooked_space_cake.png", NULL);
	textures->custard_ing = sfTexture_createFromFile\
	("img/sprites_ing/strawberry_pie/custard.png", NULL);
}

void 				create_textures_5(textures_t *textures)
{
	textures->strawberry_ing = sfTexture_createFromFile\
	("img/sprites_ing/strawberry_pie/strawberry.png", NULL);
	textures->sugar_strawberry_pie_ing = sfTexture_createFromFile\
	("img/sprites_ing/strawberry_pie/sugar.png", NULL);
	textures->cooked_strawberry_pie = sfTexture_createFromFile\
	("img/sprites_ing/strawberry_pie/cooked_strawberry_pie.png", NULL);
	textures->dish_ing = sfTexture_createFromFile\
	("img/sprites_ing/pound_cake/dish.png", NULL);
	textures->egg_pound_cake_ing = sfTexture_createFromFile\
	("img/sprites_ing/pound_cake/egg.png", NULL);
	textures->flour_pound_cake_ing = sfTexture_createFromFile\
	("img/sprites_ing/pound_cake/flour.png", NULL);
	textures->sugar_pound_cake_ing = sfTexture_createFromFile\
	("img/sprites_ing/pound_cake/sugar.png", NULL);
	textures->butter_pound_cake_ing = sfTexture_createFromFile\
	("img/sprites_ing/pound_cake/butter.png", NULL);
	textures->cooked_pound_cake = sfTexture_createFromFile\
	("img/sprites_ing/pound_cake/cooked_pound_cake.png", NULL);
	textures->coin_spritesheet = sfTexture_createFromFile\
	("img/spritesheet/coin_spritesheet.png", NULL);
}

textures_t 			create_textures(void)
{
	textures_t textures;

	create_textures_1(&textures);
	create_textures_2(&textures);
	create_textures_3(&textures);
	create_textures_4(&textures);
	create_textures_5(&textures);
	return (textures);
}
