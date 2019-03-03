/*
** EPITECH PROJECT, 2017
** my_cook_2017
** File description:
** create.c
*/

#include "my.h"

void 				create_defeat_scene_2(scene_t *scene, all_t all)
{
	scene->button = malloc(sizeof(button_t) * 1);
	scene->object = malloc(sizeof(object_t) * 1);
	scene->text = malloc(sizeof(text_t) * 4);
	scene->text[0] = create_text("MAIN MENU", (sfVector2f){720, 773}, 70,\
	all.font.font, sfWhite);
	scene->text[1] = create_text("100", (sfVector2f){1240, 395}, 85,\
	all.font.font2, sfWhite);
	scene->text[2] = create_text("100", (sfVector2f){1170, 500}, 85,\
	all.font.font2, sfWhite);
	scene->text[3] = create_text("100", (sfVector2f){1225, 610}, 85,\
	all.font.font2, sfWhite);
	scene->nb_object = 1;
	scene->nb_button = 1;
	scene->nb_text = 4;
}

scene_t				create_defeat_scene(all_t all)
{
	scene_t scene;

	create_defeat_scene_2(&scene, all);
	scene.object[0] = create_object((sfVector2f){485, 60},\
	(sfIntRect){0, 0, 950, 900}, 0, 0, all.textures.defeat_scene, BG);
	scene.button[0] = create_button(MOUSE, (sfVector2f){550, 117},\
	(sfVector2f){685, 760}, 550, (sfIntRect){0, 0, 550, 157}, all.\
	textures.button, go_to_scene_0);
	return (scene);
}