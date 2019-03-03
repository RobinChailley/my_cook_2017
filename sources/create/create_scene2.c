/*
** EPITECH PROJECT, 2017
** my_cook_2017
** File description:
** create.c
*/

#include "my.h"

void 				create_setting_scene_3(scene_t *scene,
all_t all)
{
	scene->button[2] = create_button(MOUSE, (sfVector2f){550, 117},\
	(sfVector2f){685, 600}, 550, (sfIntRect){0, 0, 550, 157},\
	all.textures.button, difficulty_3);
	scene->button[3] = create_button(MOUSE, (sfVector2f){550, 117},\
	(sfVector2f){685, 800}, 550, (sfIntRect){0, 0, 550, 157},\
	all.textures.button, go_to_scene_0);
	scene->nb_object = 2;
	scene->nb_button = 4;
	scene->nb_text = 5;
}

scene_t				create_setting_scene(all_t all)
{
	scene_t scene;

	create_setting_scene_2(&scene, all);
	create_setting_scene_3(&scene, all);
	scene.object[1] = create_object((sfVector2f){580, 340},\
	(sfIntRect){0, 0, 100, 100}, 0, 0, all.textures.circle, BG);
	scene.button[0] = create_button(MOUSE, (sfVector2f){550, 117},\
	(sfVector2f){685, 320}, 550, (sfIntRect){0, 0, 550, 157},\
	all.textures.button, difficulty_1);
	scene.button[1] = create_button(MOUSE, (sfVector2f){550, 117},\
	(sfVector2f){685, 460}, 550, (sfIntRect){0, 0, 550, 157},\
	all.textures.button, difficulty_2);

	return (scene);
}

scene_t				create_htp_scene(all_t all)
{
	scene_t scene;

	scene.button = malloc(sizeof(button_t) * 1);
	scene.object = malloc(sizeof(object_t) * 1);
	scene.text = malloc(sizeof(text_t) * 2);
	scene.text[0] = create_text("HOW TO PLAY", (sfVector2f){590, 100},\
	100, all.font.font, sfWhite);
	scene.text[1] = create_text("EXIT", (sfVector2f){860, 810}, 70,\
	all.font.font, sfWhite);
	scene.object[0] = create_object((sfVector2f){485, 60} ,(sfIntRect)\
	{0, 0, 950, 900}, 0, 0, all.textures.htp, BG);
	scene.button[0] = create_button(MOUSE, (sfVector2f){550, 117},\
	(sfVector2f){685, 800}, 550, (sfIntRect){0, 0, 550, 157},\
	all.textures.button, go_to_scene_0);
	scene.nb_object = 1;
	scene.nb_button = 1;
	scene.nb_text = 2;
	return (scene);
}

scene_t 			create_game_scene(all_t all)
{
	scene_t scene;

	scene.object = create_object_game_scene(all);
	scene.text = create_letter_game_scene(all);
	scene.text = create_ing_game_scene(all);
	scene.button = create_button_game_scene(all);
	scene.nb_object = 17;
	scene.nb_button = 15;
	scene.nb_text = 30;
	return (scene);
}

scene_t				*create_all_scene(all_t all)
{
	scene_t *scenes = malloc(sizeof(scene_t) * 6);

	scenes[0] = create_main_scene(all);
	scenes[1] = create_pause_scene(all);
	scenes[2] = create_game_scene(all);
	scenes[3] = create_htp_scene(all);
	scenes[4] = create_setting_scene(all);
	scenes[5] = create_defeat_scene(all);
	return (scenes);
}