/*
** EPITECH PROJECT, 2017
** my_cook
** File description:
** sources/create/init_struct2.c
*/

#include "my.h"

void 				init_list_recipe_2(orders_t *order, all_t *all)
{
	order->clock = create_clock();
	order->clock_str = malloc(sizeof(char) * 100);
	order->clock_text = sfText_create();
	order->time = generate_time_with_difficult(all);
	sfText_setFont(order->clock_text, all->font.font2);
	sfText_setCharacterSize(order->clock_text, 30);
	sfText_setString(order->clock_text, order->clock_str);
}

list_recipe_t 			*init_list_recipe(all_t *all)
{
	int random = rand_ab(0, 4);
	list_recipe_t *list = malloc(sizeof(*list));
	orders_t *order = malloc(sizeof(*order));

	init_list_recipe_2(order, all);
	order->sprite = sfSprite_create();
	order->pos = (sfVector2f){30, 30};
	order->terminated = 0;
	order->recipe = generate_random_recipe(all, random);
	sfSprite_setTexture(order->sprite,\
	generate_texture_of_random_recipe(random, *all), sfTrue);
	sfSprite_setPosition(order->sprite, order->pos);
	order->next = NULL;
	order->nb_ing = generate_nb_ing(random);
	list->first = order;
	return (list);
}

scoreboard_t			create_scoreboard(void)
{
	scoreboard_t sb;

	sb.served_orders = 0;
	sb.lost_orders = 0;
	sb.max_profit = 0;
	return (sb);
}

ing_ig_t			init_ing_ig(void)
{
	ing_ig_t ing;

	ing.display = malloc(sizeof(int) * 8);
	ing.pos = malloc(sizeof(sfVector2f) * 8);
	for (int i = 0; i < 8; i++) {
		ing.pos[i] = (sfVector2f){0, 0};
		ing.sprite[i] = sfSprite_create();
		ing.display[i] = 1;
	}
	return (ing);
}