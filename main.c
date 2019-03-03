/*
** EPITECH PROJECT, 2018
** my_cook_2017
** File description:
** main.c
*/

#include "my.h"

int 				rand_ab(int a, int b)
{
	return (rand()%(b-a)+a);
}

int				main(int ac, char **av, char **env)
{
	all_t all;

	if (env[0] == NULL)
		return (84);
	all = create_all();
	while (sfRenderWindow_isOpen(all.window.window))
		loop_game(&all);
	return (0);
}