/*
** EPITECH PROJECT, 2017
** my_cook_2017
** File description:
** create_info.c
*/

#include "my.h"

game_info_t			create_game_info(void)
{
	game_info_t game_info;

	game_info.current_recipe = malloc(sizeof(int) * 8);
	for (int i = 0; i < 8; i++)
		game_info.current_recipe[i] = -1;
	game_info.place_in_recipe = 0;
	game_info.button_pressed = 0;
	game_info.nb_recipes = 1;
	game_info.random_frequence = 200;
	game_info.recipe_id = 0;
	game_info.money = 5;
	game_info.difficulty = 1;
	return (game_info);
}