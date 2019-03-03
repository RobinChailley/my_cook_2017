/*
** EPITECH PROJECT, 2017
** my_cook_2017
** File description:
** game_difficulty.c
*/

#include "my.h"

int 				generate_time_with_difficult(all_t *all)
{
	if (all->game_info.difficulty == 1)
		return (rand_ab(30, 40));
	else if (all->game_info.difficulty == 2)
		return (rand_ab(20, 30));
	else if (all->game_info.difficulty == 3)
		return (rand_ab(10, 20));
}

void 				difficulty_1(all_t *all)
{
	all->game_info.difficulty = 1;
}

void 				difficulty_2(all_t *all)
{
	all->game_info.difficulty = 2;
}

void 				difficulty_3(all_t *all)
{
	all->game_info.difficulty = 3;
}
