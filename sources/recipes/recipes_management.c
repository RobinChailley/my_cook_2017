/*
** EPITECH PROJECT, 2017
** my_cook_2017
** File description:
** recipes_gestion.c
*/

#include "my.h"

void				*create_new_recipe(all_t *all,\
orders_t *new_recipe, int random)
{
	sfTexture *texture = generate_texture_of_random_recipe(random, *all);
	new_recipe->sprite = sfSprite_create();
	new_recipe->pos = (sfVector2f){30, 400};
	new_recipe->recipe = generate_random_recipe(all, random);
	sfSprite_setTexture(new_recipe->sprite, texture, sfTrue);
	sfSprite_setPosition(new_recipe->sprite, new_recipe->pos);
	new_recipe->next = NULL;
	new_recipe->terminated = 0;
	new_recipe->nb_ing = generate_nb_ing(random);
	new_recipe->clock = create_clock();
	new_recipe->clock_str = malloc(sizeof(char) * 100);
	new_recipe->clock_text = sfText_create();
	new_recipe->time =  generate_time_with_difficult(all);
	sfText_setFont(new_recipe->clock_text, all->font.font2);
	sfText_setCharacterSize(new_recipe->clock_text, 30);
	sfText_setString(new_recipe->clock_text, new_recipe->clock_str);
}

void 				insert_orders(all_t *all)
{
	int random;
	if (all->game_info.nb_recipes < 7) {
		random = rand_ab(0, 4);
		orders_t *new_recipe = malloc(sizeof(*new_recipe));
		create_new_recipe(all, new_recipe, random);
		orders_t *tmp = all->list_recipe->first;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_recipe;
		all->game_info.nb_recipes++;
	}
}

void 				reset_current_recipe(all_t *all)
{
	all->game_info.place_in_recipe = 0;
	for (int i = 0; i < 8; i++)
		all->game_info.current_recipe[i] = -1;
	for (int i = 0; i < all->scenes[2].nb_button; i++) {
		all->scenes[2].button[i].enable = 1;
	}
}

int 				delete_terminated_recipe(all_t *all)
{
	int i = 0;
	int a = 0;
	if (all->list_recipe->first == NULL)
		return (0);
	for (int i = 0; i < all->list_recipe->first->nb_ing; i++) {
		if (all->game_info.current_recipe[i] == all->list_recipe->\
		first->recipe[i])
			a++;
	}
	if (a == all->list_recipe->first->nb_ing) {
		all->list_recipe->first = all->list_recipe->first->next;
		all->game_info.nb_recipes -= 1;
		all->game_info.money += 10;
		all->scoreboard.served_orders++;
		reset_current_recipe(all);
	}
}