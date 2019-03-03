/*
** EPITECH PROJECT, 2017
** my_cook_2017
** File description:
** create_recipes.c
*/

#include "my.h"

int 				*create_apple_pie_recipe(void)
{
	int *recipe = malloc(sizeof(int) * 6);
	recipe[0] = 2;
	recipe[1] = 11;
	recipe[2] = 3;
	recipe[3] = 1;
	recipe[4] = 12;
	recipe[5] = 14;
	return (recipe);
}

int 				*create_pound_cake_recipe(void)
{
	int *recipe = malloc(sizeof(int) * 7);
	recipe[0] = 15;
	recipe[1] = 8;
	recipe[2] = 9;
	recipe[3] = 1;
	recipe[4] = 6;
	recipe[5] = 12;
	recipe[6] = 14;
	return (recipe);
}

int 				*create_space_cake_recipe(void)
{
	int *recipe = malloc(sizeof(int) * 8);
	recipe[0] = 13;
	recipe[1] = 8;
	recipe[2] = 9;
	recipe[3] = 6;
	recipe[4] = 5;
	recipe[5] = 4;
	recipe[6] = 12;
	recipe[7] = 14;
	return (recipe);
}

int 				*create_strawberry_pie_recipe(void)
{
	int *recipe = malloc(sizeof(int) * 6);
	recipe[0] = 2;
	recipe[1] = 7;
	recipe[2] = 10;
	recipe[3] = 1;
	recipe[4] = 12;
	recipe[5] = 14;
	return (recipe);
}