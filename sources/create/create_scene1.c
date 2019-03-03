/*
** EPITECH PROJECT, 2017
** my_cook_2017
** File description:
** create.c
*/

#include "my.h"

void 				create_main_scene_2(scene_t *scene, all_t all)
{
	scene->object = malloc(sizeof(object_t) * 1);
	scene->button = malloc(sizeof(button_t) * 4);
	scene->text = malloc(sizeof(text_t) * 4);
	scene->text[0] = create_text("PLAY", (sfVector2f){305, 292}, 90,\
	all.font.font, sfWhite);
	scene->text[1] = create_text("HOW TO PLAY", (sfVector2f){205, 490},\
	60, all.font.font, sfWhite);
	scene->text[2] = create_text("SETTINGS", (sfVector2f){265, 670}, 60,\
	all.font.font, sfWhite);
	scene->text[3] = create_text("QUIT GAME", (sfVector2f){215, 840}, 70,\
	all.font.font, sfWhite);
	scene->object[0] = create_object((sfVector2f){0, 0},\
	(sfIntRect){0, 0, 1920, 1080}, 0, 0, all.textures.main_menu, BG);
}

scene_t				create_main_scene(all_t all)
{
	scene_t scene;

	create_main_scene_2(&scene, all);
	scene.button[0] = create_button(MOUSE, (sfVector2f){550, 157},\
	(sfVector2f){160, 272}, 550, (sfIntRect){0, 0, 550, 157},\
	all.textures.button, go_to_scene_2);
	scene.button[1] = create_button(MOUSE, (sfVector2f){550, 157},\
	(sfVector2f){160, 450}, 550, (sfIntRect){0, 0, 550, 157},\
	all.textures.button, go_to_scene_3);
	scene.button[2] = create_button(MOUSE, (sfVector2f){550, 157},\
	(sfVector2f){160, 630}, 550, (sfIntRect){0, 0, 550, 157},\
	all.textures.button, go_to_scene_4);
	scene.button[3] = create_button(MOUSE, (sfVector2f){550, 157},\
	(sfVector2f){160, 810}, 550, (sfIntRect){0, 0, 550, 157},\
	all.textures.button, my_exit);
	scene.nb_object = 1;
	scene.nb_button = 4;
	scene.nb_text = 4;
	return (scene);
}

void 				create_pause_scene_2(scene_t *scene, all_t all)
{
	scene->button = malloc(sizeof(button_t) * 10);
	scene->object = malloc(sizeof(object_t) * 10);
	scene->text = malloc(sizeof(text_t) * 10);
	scene->text[0] = create_text("PAUSE", (sfVector2f){590, 70}, 200,\
	all.font.font, sfWhite);
	scene->text[1] = create_text("RESUME", (sfVector2f){800, 390} , 70,\
	all.font.font, sfWhite);
	scene->text[2] = create_text("MAIN MENU", (sfVector2f){730, 560},\
	70, all.font.font, sfWhite);
	scene->text[3] = create_text("QUIT GAME", (sfVector2f){730, 730},\
	70, all.font.font, sfWhite);
	scene->object[0] = create_object((sfVector2f){485, 60},\
	(sfIntRect){0, 0, 950, 900}, 0, 0, all.textures.pause, BG);
}

scene_t				create_pause_scene(all_t all)
{
	scene_t scene;

	create_pause_scene_2(&scene, all);
	scene.button[0] = create_button(MOUSE, (sfVector2f){550, 117},\
	(sfVector2f){685, 380}, 550, (sfIntRect){0, 0, 550, 157},\
	all.textures.button, go_to_scene_2);
	scene.button[1] = create_button(MOUSE, (sfVector2f){550, 117},\
	(sfVector2f){685, 550}, 550, (sfIntRect){0, 0, 550, 157},\
	all.textures.button, go_to_scene_0);
	scene.button[2] = create_button(MOUSE, (sfVector2f){550, 117},\
	(sfVector2f){685, 720}, 550, (sfIntRect){0, 0, 550, 157},\
	all.textures.button, my_exit);
	scene.nb_object = 1;
	scene.nb_button = 3;
	scene.nb_text = 4;
	return (scene);
}

void 				create_setting_scene_2(scene_t *scene,\
all_t all)
{
	scene->button = malloc(sizeof(button_t) * 4);
	scene->object = malloc(sizeof(object_t) * 2);
	scene->text = malloc(sizeof(text_t) * 5);
	scene->text[0] = create_text("SETTINGS", (sfVector2f){680, 100},\
	100, all.font.font, sfWhite);
	scene->text[1] = create_text("DIFICULTY: EASY", (sfVector2f)\
	{760, 350}, 40, all.font.font, sfWhite);
	scene->text[2] = create_text("DIFICULTY: MEDIUM", (sfVector2f)\
	{735, 490}, 40, all.font.font, sfWhite);
	scene->text[3] = create_text("DIFICULTY: HARD", (sfVector2f)\
	{760, 630}, 40, all.font.font, sfWhite);
	scene->text[4] = create_text("EXIT", (sfVector2f){860, 810},\
	70, all.font.font, sfWhite);
	scene->object[0] = create_object((sfVector2f){485, 60},\
	(sfIntRect){0, 0, 950, 900}, 0, 0, all.textures.pause, BG);
}