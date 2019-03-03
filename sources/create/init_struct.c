/*
** EPITECH PROJECT, 2017
** my_cook_2017
** File description:
** create.c
*/

#include "my.h"

window_t 			create_window(void)
{
	window_t window;

	sfVideoMode mode = {1920, 1080, 32};
	window.window = sfRenderWindow_create(mode, "my_project",\
	sfTitlebar | sfResize | sfClose , NULL);
	sfRenderWindow_setFramerateLimit(window.window, 120);
	return (window);
}

font_t				create_font(void)
{
	font_t font;

	font.font = sfFont_createFromFile("font/yonki.ttf");
	font.font2 = sfFont_createFromFile("font/bebas.ttf");
	return(font);
}

my_clock_t 			create_clock(void)
{
	my_clock_t my_clock;

	my_clock.clock = sfClock_create();
	my_clock.time = sfClock_getElapsedTime(my_clock.clock);
	my_clock.n = 0;
	my_clock.n2 = 0;
	my_clock.seconds = 0;
	return (my_clock);
}

all_t				create_all(void)
{
	all_t all;

	srand((unsigned int)&all);
	all.ptr_tab = init_ptr_tab();
	all.font = create_font();
	all.textures = create_textures();
	all.scenes = create_all_scene(all);
	all.my_clock = create_clock();
	all.window = create_window();
	all.game_info = create_game_info();
	all.list_recipe = init_list_recipe(&all);
	all.ing_ig = init_ing_ig();
	all.scoreboard = create_scoreboard();
	all.current_scene = 0;
	return (all);
}