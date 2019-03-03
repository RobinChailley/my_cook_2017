/*
** EPITECH PROJECT, 2017
** my_cook_2017
** File description:
** sources/display.c
*/

#include "my.h"

int 				*generate_random_recipe(all_t *all, int random)
{
	switch (random) {
		case 0:
			return (create_apple_pie_recipe());
		case 1:
			return (create_pound_cake_recipe());
		case 2:
			return (create_space_cake_recipe());
		case 3:
			return (create_strawberry_pie_recipe());
	}
}

sfTexture 			*generate_texture_of_random_recipe(int random,\
all_t all)
{
	switch (random) {
		case 0:
			return (all.textures.recipe_apple_pie);
		case 1:
			return (all.textures.recipe_pound_cake);
		case 2:
			return (all.textures.recipe_space_cake);
		case 3:
			return (all.textures.recipe_strawberry_pie);
	}
}

int 				generate_nb_ing(int random)
{
	switch (random) {
		case 0:
			return (6);
		case 1:
			return (7);
		case 2:
			return (8);
		case 3:
			return (6);
	}
}