/*
** EPITECH PROJECT, 2017
** my_cook_2017
** File description:
** create.c
*/

#include "my.h"

void 				create_textures_1(textures_t *textures)
{
	textures->settings = sfTexture_createFromFile\
	("img/scenes/settings.png", NULL);
	textures->button = sfTexture_createFromFile\
	("img/scenes/button.png", NULL);
	textures->main_menu = sfTexture_createFromFile\
	("img/scenes/main_menu.png", NULL);
	textures->pause = sfTexture_createFromFile\
	("img/scenes/pause.png", NULL);
	textures->htp = sfTexture_createFromFile\
	("img/scenes/htp.png", NULL);
	textures->game = sfTexture_createFromFile\
	("img/scenes/game.png", NULL);
	textures->defeat_scene = sfTexture_createFromFile\
	("img/scenes/defeat.png", NULL);
	textures->circle = sfTexture_createFromFile\
	("img/scenes/circle.png", NULL);
	textures->enter = sfTexture_createFromFile\
	("img/logo_ing/enter.png", NULL);
	textures->bowl = sfTexture_createFromFile\
	("img/logo_ing/bowl.png", NULL);
}

void 				create_textures_2(textures_t *textures)
{
	textures->egg = sfTexture_createFromFile\
	("img/logo_ing/egg.png", NULL);
	textures->milk = sfTexture_createFromFile\
	("img/logo_ing/milk.png", NULL);
	textures->strawberry = sfTexture_createFromFile\
	("img/logo_ing/strawberry.png", NULL);
	textures->canabis = sfTexture_createFromFile\
	("img/logo_ing/canabis.png", NULL);
	textures->flour = sfTexture_createFromFile\
	("img/logo_ing/flour.png", NULL);
	textures->butter = sfTexture_createFromFile\
	("img/logo_ing/butter.png", NULL);
	textures->sugar = sfTexture_createFromFile\
	("img/logo_ing/sugar.png", NULL);
	textures->custard = sfTexture_createFromFile\
	("img/logo_ing/custard.png", NULL);
	textures->applejam = sfTexture_createFromFile\
	("img/logo_ing/applejam.png", NULL);
	textures->puffpastery = sfTexture_createFromFile\
	("img/logo_ing/puffpastery.png", NULL);
}

void 				create_textures_3(textures_t *textures)
{
	textures->cutapples = sfTexture_createFromFile\
	("img/logo_ing/cutapples.png", NULL);
	textures->dish = sfTexture_createFromFile\
	("img/logo_ing/dish.png", NULL);
	textures->furnace = sfTexture_createFromFile\
	("img/logo_ing/furnace.png", NULL);
	textures->recipe_apple_pie = sfTexture_createFromFile\
	("img/recipes/apple_pie_recipe.png", NULL);
	textures->recipe_space_cake = sfTexture_createFromFile\
	("img/recipes/space_cake_recipe.png", NULL);
	textures->recipe_pound_cake = sfTexture_createFromFile\
	("img/recipes/pound_cake_recipe.png", NULL);
	textures->recipe_strawberry_pie = sfTexture_createFromFile\
	("img/recipes/strawberry_pie_recipe.png", NULL);
	textures->puff_pastry_ing = sfTexture_createFromFile\
	("img/sprites_ing/apple_pie/puff_pastry.png", NULL);
	textures->apple_jam_ing = sfTexture_createFromFile\
	("img/sprites_ing/apple_pie/applejam.png", NULL);
	textures->cut_apples_ing = sfTexture_createFromFile\
	("img/sprites_ing/apple_pie/cut_apples.png", NULL);
}